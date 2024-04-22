#include <iostream>

struct Node {
public:
    int number;
    Node* previous;
    Node* next;
};


struct ForwardList {
public:
    Node* head;
    Node* tail;

    ForwardList() {
        head = NULL;
        tail = NULL;
    }

    void add_number(int number) {
        Node* newNode = new Node();
        newNode->number = number;
        newNode->next = NULL;
        newNode->previous = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->previous = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }
};

int main() {
    ForwardList list;
    list.add_number(100);
    list.add_number(200);
    list.add_number(300);
    list.add_number(400);
    list.add_number(500);

    Node* current = list.head;
    while (current->next != NULL) {
        current = current->next;
    }
    Node* last = current;
    std::cout << last->number << std::endl;
    while(last->previous != NULL) {
        last = last->previous;
        std::cout << last->number << std::endl;
    }
    return 0;
}