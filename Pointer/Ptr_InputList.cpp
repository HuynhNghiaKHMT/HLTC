#include <iostream>
using namespace std;

struct Node {
    int x;
    Node* next;
};

int main() {
    int n;
    Node *head = NULL;
    while (1) {
        cin>>n;
        if (n == 3)
            break;
        Node *a = new Node;
        a->next = head;
        cin >> a->x;
        head = a;
    }

    while (head != NULL) {
        cout << head->x << ' ';
        head = head->next;
    }

    return 0;
}
