#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to divide the linked list into two separate lists of even and odd numbers
Node* divide(int N, Node* head) {
    Node* evenStart = nullptr;
    Node* evenEnd = nullptr;
    Node* oddStart = nullptr;
    Node* oddEnd = nullptr;
    Node* currNode = head;

    while (currNode != nullptr) {
        int val = currNode->data;
        if (val % 2 == 0) {
            if (evenStart == nullptr) {
                evenStart = currNode;
                evenEnd = evenStart;
            } else {
                evenEnd->next = currNode;
                evenEnd = evenEnd->next;
            }
        } else {
            if (oddStart == nullptr) {
                oddStart = currNode;
                oddEnd = oddStart;
            } else {
                oddEnd->next = currNode;
                oddEnd = oddEnd->next;
            }
        }

        currNode = currNode->next;
    }

    if (oddStart == nullptr || evenStart == nullptr)
        return head;

    evenEnd->next = oddStart;
    if (oddEnd != nullptr)
        oddEnd->next = nullptr;

    return evenStart;
}

// Function to print the linked list
void printList(Node* head) {
    Node* currNode = head;
    while (currNode != nullptr) {
        std::cout << currNode->data << " ";
        currNode = currNode->next;
    }
    std::cout << std::endl;
}

// Sample main function for testing
int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    std::cout << "Original list: ";
    printList(head);

    // Divide the linked list
    head = divide(5, head);

    std::cout << "After dividing: ";
    printList(head);

    return 0;
}
