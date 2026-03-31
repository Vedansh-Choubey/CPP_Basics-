#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
//    int num, value;
//    cout << "Enter number of nodes: ";
//    cin >> num;

//    Node* head = NULL;
//    Node* temp = NULL;

//    for (int i = 0; i < num; i++) {
//        cout << "Enter value: ";
//        cin >> value;

//        Node* newNode = new Node();
//        newNode->data = value;
//        newNode->next = NULL;

//        if (head == NULL) {
//            head = newNode;
//            temp = newNode;
//        } else {
//            temp->next = newNode;
//            temp = newNode;
//        }
//    }

//                          // to Display
//    temp = head;
//    while (temp != NULL) {
//        cout << temp->data << " -> ";
//        temp = temp->next;
//    }
//    cout << "NULL";

 //   return 0;
//}

                     // Manually Creating 3 nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

                     // Data Assign krennge 
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

                     // List Print krne ke liye 
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    return 0;
}
