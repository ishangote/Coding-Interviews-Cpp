struct SLLNode {
    int value;
    SLLNode* next;
    SLLNode(int value) : value(value), next(nullptr) {}
};

SLLNode* add_two_numbers(SLLNode* l1, SLLNode* l2) {
    SLLNode sentinel_node = SLLNode(0);
    SLLNode* tail = &sentinel_node;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry != 0) {
        int digit1 = (l1 != nullptr) ? l1->value : 0;
        int digit2 = (l2 != nullptr) ? l2->value : 0;

        int sum = digit1 + digit2 + carry;

        SLLNode* new_node = new SLLNode(sum % 10);
        carry = sum / 10;
        tail->next = new_node;

        tail = tail->next;
        l1 = (l1 != nullptr) ? l1->next : nullptr;
        l2 = (l2 != nullptr) ? l2->next : nullptr;
    }

    return sentinel_node.next;
}
