# Leetcode problems

# Make all Leetcode subdirs available for #include
include_directories(${CMAKE_SOURCE_DIR}/Leetcode)

# Two Sum problem
create_test_executable(two_sum_test
    "1_two_sum/two_sum.cpp"
    "1_two_sum/two_sum_test.cpp"
)

# Merge String Alternately
create_test_executable(merge_strings_alternately_test
    "1768_merge_strings_alternately/merge_strings_alternately.cpp"
    "1768_merge_strings_alternately/merge_strings_alternately_test.cpp"
)

# Palindrome Number
create_test_executable(palindrome_number_test
    "9_palindrome_number/palindrome_number.cpp"
    "9_palindrome_number/palindrome_number_test.cpp"
)

# Merge sorted array
create_test_executable(merge_sorted_array_test
    "88_merge_sorted_array/merge_sorted_array.cpp"
    "88_merge_sorted_array/merge_sorted_array_test.cpp"
)

# Implement trie
create_test_executable(implement_trie_test
    "208_implement_trie/implement_trie.cpp"
    "208_implement_trie/implement_trie_test.cpp"
)

# Majority Element
create_test_executable(majority_element_test
    "169_majority_element/majority_element.cpp"
    "169_majority_element/majority_element_test.cpp"
)

# Find N Unique Integers Sum Up to Zero
create_test_executable(find_n_unique_integers_sum_up_to_zero_test
    "1304_find_n_unique_integers_sum_up_to_zero/find_n_unique_integers_sum_up_to_zero.cpp"
    "1304_find_n_unique_integers_sum_up_to_zero/find_n_unique_integers_sum_up_to_zero_test.cpp"
)

# Find N Unique Integers Sum Up to Zero
create_test_executable(best_time_to_buy_and_sell_stock_test
    "121_best_time_to_buy_and_sell_stock/best_time_to_buy_and_sell_stock.cpp"
    "121_best_time_to_buy_and_sell_stock/best_time_to_buy_and_sell_stock_test.cpp"
)

# Find N Unique Integers Sum Up to Zero
create_test_executable(find_the_index_of_the_first_occurrence_in_a_string_test
    "28_find_the_index_of_the_first_occurrence_in_a_string/find_the_index_of_the_first_occurrence_in_a_string.cpp"
    "28_find_the_index_of_the_first_occurrence_in_a_string/find_the_index_of_the_first_occurrence_in_a_string_test.cpp"
)

# Add more Leetcode problems here as you create them
# create_test_executable(three_sum_test
#     "15_three_sum/three_sum.cpp"
#     "15_three_sum/three_sum_test.cpp"
# )
