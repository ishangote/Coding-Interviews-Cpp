#include <gtest/gtest.h>

#include <vector>

// Forward declarations

struct SLLNode {
    int value;
    SLLNode* next;
    SLLNode(int value) : value(value), next(nullptr) {}
};

SLLNode* merge_two_sorted_lists(SLLNode* head1, SLLNode* head2);

// Helpers for testing

SLLNode* build_singly_linked_list(const std::vector<int>& values) {
    if (values.empty()) return nullptr;
    SLLNode dummy = SLLNode(0);
    SLLNode* tail = &dummy;

    for (int i = 0; i < values.size(); i++) {
        tail->next = new SLLNode(values[i]);
        tail = tail->next;
    }

    return dummy.next;
}

std::vector<int> list_to_vector(SLLNode* head) {
    std::vector<int> result;

    while (head) {
        result.push_back(head->value);
        head = head->next;
    }

    return result;
}

void free_list(SLLNode* head) {
    while (head) {
        SLLNode* tmp = head;
        head = head->next;
        delete tmp;
    }
}

// TESTS

TEST(MergeTwoSortedListsTest, BothEmpty) {
    SLLNode* result = merge_two_sorted_lists(nullptr, nullptr);
    EXPECT_EQ(result, nullptr);
}

TEST(MergeTwoSortedListsTest, FirstEmpty) {
    SLLNode* list2 = build_singly_linked_list({1, 3, 5});
    SLLNode* result = merge_two_sorted_lists(nullptr, list2);
    EXPECT_EQ(list_to_vector(result), (std::vector<int>{1, 3, 5}));
    free_list(result);
}

TEST(MergeTwoSortedListsTest, SecondEmpty) {
    SLLNode* list1 = build_singly_linked_list({2, 4, 6});
    SLLNode* result = merge_two_sorted_lists(list1, nullptr);
    EXPECT_EQ(list_to_vector(result), (std::vector<int>{2, 4, 6}));
    free_list(result);
}

TEST(MergeTwoSortedListsTest, InterleavedMerge) {
    SLLNode* list1 = build_singly_linked_list({1, 4, 7});
    SLLNode* list2 = build_singly_linked_list({2, 3, 6, 8});
    SLLNode* result = merge_two_sorted_lists(list1, list2);
    EXPECT_EQ(list_to_vector(result), (std::vector<int>{1, 2, 3, 4, 6, 7, 8}));
    free_list(result);
}

TEST(MergeTwoSortedListsTest, DuplicateValues) {
    SLLNode* list1 = build_singly_linked_list({1, 2, 2});
    SLLNode* list2 = build_singly_linked_list({1, 1, 3});
    SLLNode* result = merge_two_sorted_lists(list1, list2);
    EXPECT_EQ(list_to_vector(result), (std::vector<int>{1, 1, 1, 2, 2, 3}));
    free_list(result);
}