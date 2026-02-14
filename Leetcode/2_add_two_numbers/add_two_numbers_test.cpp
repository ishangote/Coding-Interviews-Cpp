#include <gtest/gtest.h>

#include <vector>

// Forward declarations

struct SLLNode {
    int value;
    SLLNode* next;
    SLLNode(int value) : value(value), next(nullptr) {}
};

SLLNode* add_two_numbers(SLLNode* l1, SLLNode* l2);

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

TEST(AddTwoNumbersTest, LeetcodeExample1) {
    // 342 + 465 = 807
    SLLNode* l1 = build_singly_linked_list({2, 4, 3});
    SLLNode* l2 = build_singly_linked_list({5, 6, 4});
    SLLNode* result = add_two_numbers(l1, l2);
    EXPECT_EQ(list_to_vector(result), (std::vector<int>{7, 0, 8}));
    free_list(l1);
    free_list(l2);
    free_list(result);
}

TEST(AddTwoNumbersTest, LeetcodeExample2) {
    // 0 + 0 = 0
    SLLNode* l1 = build_singly_linked_list({0});
    SLLNode* l2 = build_singly_linked_list({0});
    SLLNode* result = add_two_numbers(l1, l2);
    EXPECT_EQ(list_to_vector(result), (std::vector<int>{0}));
    free_list(l1);
    free_list(l2);
    free_list(result);
}

TEST(AddTwoNumbersTest, LeetcodeExample3) {
    // 9999999 + 9999 = 10009998
    SLLNode* l1 = build_singly_linked_list({9, 9, 9, 9, 9, 9, 9});
    SLLNode* l2 = build_singly_linked_list({9, 9, 9, 9});
    SLLNode* result = add_two_numbers(l1, l2);
    EXPECT_EQ(list_to_vector(result), (std::vector<int>{8, 9, 9, 9, 0, 0, 0, 1}));
    free_list(l1);
    free_list(l2);
    free_list(result);
}

TEST(AddTwoNumbersTest, BothEmpty) {
    SLLNode* result = add_two_numbers(nullptr, nullptr);
    EXPECT_EQ(result, nullptr);
}

TEST(AddTwoNumbersTest, FirstEmpty) {
    SLLNode* l2 = build_singly_linked_list({1, 2, 3});
    SLLNode* result = add_two_numbers(nullptr, l2);
    EXPECT_EQ(list_to_vector(result), (std::vector<int>{1, 2, 3}));
    free_list(l2);
    free_list(result);
}

TEST(AddTwoNumbersTest, SecondEmpty) {
    SLLNode* l1 = build_singly_linked_list({4, 5, 6});
    SLLNode* result = add_two_numbers(l1, nullptr);
    EXPECT_EQ(list_to_vector(result), (std::vector<int>{4, 5, 6}));
    free_list(l1);
    free_list(result);
}

TEST(AddTwoNumbersTest, DifferentLengths) {
    // 99 + 1 = 100
    SLLNode* l1 = build_singly_linked_list({9, 9});
    SLLNode* l2 = build_singly_linked_list({1});
    SLLNode* result = add_two_numbers(l1, l2);
    EXPECT_EQ(list_to_vector(result), (std::vector<int>{0, 0, 1}));
    free_list(l1);
    free_list(l2);
    free_list(result);
}

TEST(AddTwoNumbersTest, SingleDigitNoCarry) {
    // 2 + 3 = 5
    SLLNode* l1 = build_singly_linked_list({2});
    SLLNode* l2 = build_singly_linked_list({3});
    SLLNode* result = add_two_numbers(l1, l2);
    EXPECT_EQ(list_to_vector(result), (std::vector<int>{5}));
    free_list(l1);
    free_list(l2);
    free_list(result);
}

TEST(AddTwoNumbersTest, SingleDigitWithCarry) {
    // 5 + 7 = 12
    SLLNode* l1 = build_singly_linked_list({5});
    SLLNode* l2 = build_singly_linked_list({7});
    SLLNode* result = add_two_numbers(l1, l2);
    EXPECT_EQ(list_to_vector(result), (std::vector<int>{2, 1}));
    free_list(l1);
    free_list(l2);
    free_list(result);
}
