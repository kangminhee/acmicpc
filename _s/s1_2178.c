#include <stdio.h>
#include <stdlib.h>

#define	STACK_LEN 1000

typedef struct {
	int x;
	int y;
	int dist;
} Data;

typedef struct _arrayStack {
	Data stackArr[STACK_LEN];
	int topIndex;
} ArrayStack;
typedef ArrayStack Stack;

//functions
void StackInit(Stack * pstack);
int IsSEmpty(Stack * pstack);
void SPush(Stack * pstack, Data data);
Data SPop(Stack * pstack);
Data SPeek(Stack * pstack);
void DFS(Stack *stack, char **maze, int mazerow, int mazecol, Data fin); 

int main(int argc, char *argv[]) {
	//initialize maze
	int mazerow, mazecol;
	char c;
	Data ini, fin;

	scanf("%d %d", &mazerow, &mazecol);
	char ** maze = (char **) malloc (sizeof(char *) * mazerow);
	for (int i = 0; i < mazerow; i++) {
		maze[i] = (char *) malloc (sizeof(char) * mazecol);
	}
	
	for (int i = 0; i < mazerow; i++) {
		for (int j = 0; j < mazecol; j++) {
			c = getchar();
			if (c == '0' || c == '1') {
				maze[i][j] = c;
			}
			else
				j--;
		}
	}
	scanf("%d %d %d %d", &ini.x, &ini.y, &fin.x, &fin.y);
	ini.x--; ini.y--; fin.x--; fin.y--;

	maze[ini.x][ini.y] = '2';

	//solve maze
	Stack stack;
	StackInit(&stack);
	SPush(&stack, ini);

	DFS(&stack, maze, mazerow, mazecol, fin);

	//free
	for (int i = 0; i < mazerow; i++) {
		free(maze[i]);
	}
	free(maze);

	return 0;
}

void StackInit(Stack * pstack) {
	pstack -> topIndex = -1;
}

int IsSEmpty(Stack * pstack) {
	return (pstack->topIndex == -1);
}

void SPush(Stack * pstack, Data data) {
	pstack -> topIndex += 1;
	pstack -> stackArr[pstack->topIndex] = data;
}

Data SPop (Stack * pstack) {
	int rIdx;
	
	if (IsSEmpty(pstack)) {
		printf("stack Memory Error!");
		exit(-1);
	}

	rIdx = pstack -> topIndex;
	pstack -> topIndex -= 1;

	return pstack->stackArr[rIdx];
}

Data SPeek(Stack * pstack) {
	if (IsSEmpty(pstack)) {
		printf("Stack Memory Error!");
		exit(-1);
	}
	return pstack->stackArr[pstack->topIndex];
}

void DFS(Stack *stack, char **maze, int mazerow, int mazecol, Data fin) {
    int dirX[4] = {0, 1, 0, -1}; 
    int dirY[4] = {1, 0, -1, 0};
	int minPathLength = STACK_LEN;

    while (!IsSEmpty(stack)) {
        Data current = SPop(stack);

        if (current.x == fin.x && current.y == fin.y) {
            if (current.dist < minPathLength) {
                minPathLength = current.dist;
            }
        }

        for (int i = 0; i < 4; i++) {
            int newX = current.x + dirX[i];
            int newY = current.y + dirY[i];

            if (newX >= 0 && newX < mazerow && newY >= 0 && newY < mazecol && maze[newX][newY] == '0') {
                maze[newX][newY] = '2'; 
				Data nextPos = {newX, newY, current.dist + 1};
                SPush(stack, nextPos);
            }
        }
    }

	printf("%d", minPathLength+1);

	return;
}