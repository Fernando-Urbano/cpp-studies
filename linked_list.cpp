#include <iostream>

struct Node {
public:
    int number;
    Node* next;
};


struct NodeList {
public:
    Node* head;
    Node* tail;

    NodeList() {
        head = NULL;
        tail = NULL;
    }

    void add_number(int number) {
        Node* newNode = new Node();
        newNode->number = number;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
};

int main() {
    NodeList list;
    list.add_number(100);
    list.add_number(200);
    list.add_number(300);

    Node* current = list.head;
    while (current != NULL) {
        std::cout << current->number << std::endl;
        current = current->next;
    }

    return 0;
}