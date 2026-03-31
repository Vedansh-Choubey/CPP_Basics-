#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int num, value;
    cout << "Enter number of nodes: ";
    cin >> num;

    Node* head = NULL;
    Node* temp = NULL;

    for (int i = 0; i < num; i++) {
        cout << "Enter value: ";
        cin >> value;

        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

                          // to Display
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}
