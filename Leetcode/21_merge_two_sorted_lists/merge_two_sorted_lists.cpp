struct SLLNode {
    int value;
    SLLNode* next;
    SLLNode(int value) : value(value), next(nullptr) {}
};

// Time: O(n + m), where n => number of nodes in list1, m => number of nodes in list2
// Space: O(1)
SLLNode* merge_two_sorted_lists(SLLNode* head1, SLLNode* head2) {
    SLLNode dummy(0);
    SLLNode* tail = &dummy;

    while (head1 && head2) {
        if (head1->value <= head2->value) {
            tail->next = head1;
            head1 = head1->next;
        } else {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }

    tail->next = head1 ? head1 : head2;

    return dummy.next;
}
