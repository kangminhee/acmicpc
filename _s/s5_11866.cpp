#include <bits/stdc++.h>
using namespace std;

typedef struct Node {
    int data;
    Node * next;
    Node * prev;
} Node;

int main() {
    int n, k; cin >> n >> k;
    queue<int> q;

    Node * head = new Node;
    head->data = 1;
    Node * cur = head;

    for (int i = 2; i <= n; i++) {
        Node * tmp = new Node;
        tmp -> data = i;
        tmp -> prev = cur;
        cur -> next = tmp;
        cur = cur -> next;
    }
    cur -> next = head;
    head -> prev = cur;

    cur = head -> next -> next;

    while (q.size() < n) {
        Node * tmp = cur;
        q.push(cur->data);
        cur -> prev -> next = cur -> next;
        cur -> next -> prev = cur -> prev;

        cur = cur -> next -> next -> next;

        delete tmp;
    }

    cout << "<";
    for (int i = 0; i < n; i++) {
        cout << q.front();
        q.pop();
        if (q.size()!=0) cout << ", ";
    }
    cout << ">";
}