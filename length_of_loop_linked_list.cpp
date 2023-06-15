int findLoopLength(Node* head) {
    Node* slow_p = head;
    Node* fast_p = head;
    int count = 0;

    while (slow_p && fast_p && fast_p->next != NULL) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;

        if (slow_p == fast_p) {
            slow_p = slow_p->next;
            count++;

            while (slow_p != fast_p) {
                slow_p = slow_p->next;
                count++;
            }

            return count;
        }
    }

    return 0;
}
