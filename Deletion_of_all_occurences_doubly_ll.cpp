#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void deleteNodesWithValue(Node** head_ref, int x) {
    Node* current = *head_ref;
    Node* next_node;

    while (current != NULL) {
        if (current->data == x) {
            next_node = current->next;

            // If the node to be deleted is the head
            if (current == *head_ref) {
                *head_ref = next_node;
                if (next_node != NULL) {
                    next_node->prev = NULL;
                }
            } else {
                current->prev->next = next_node;
                if (next_node != NULL) {
                    next_node->prev = current->prev;
                } else {
                    // If the node to be deleted is the last node
                    current->prev->next = NULL;
                }
            }
            delete current;
        } else {
            next_node = current->next;
        }
        current = next_node;
    }
}

void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = *head_ref;

    if (*head_ref != NULL) {
        (*head_ref)->prev = new_node;
    }

    *head_ref = new_node;
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Creating the doubly linked list
    Node* head = NULL;

    // Pushing elements into the doubly linked list
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);

    std::cout << "Linked List before deletion: ";
    printList(head);

    int valueToDelete = 3;
    deleteNodesWithValue(&head, valueToDelete);

    std::cout << "Linked List after deletion of nodes with value " << valueToDelete << ": ";
    printList(head);

    // Deallocating memory
    Node* current = head;
    Node* next_node;
    while (current != NULL) {
        next_node = current->next;
        delete current;
        current = next_node;
    }

    return 0;
}
