#include <stdio.h>

#define MAX 9

int n, m;
int arr[MAX];
int used[MAX];

void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!used[i]) {
			// used[i] = 1;
			arr[cnt] = i;
			dfs(cnt+1);
			used[i] = 0;
		}
	}
}

int main() {
	scanf("%d %d", &n, &m);
	dfs(0);
	return 0;
}