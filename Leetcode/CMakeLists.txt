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

# Add more Leetcode problems here as you create them
# create_test_executable(three_sum_test
#     "15_three_sum/three_sum.cpp"
#     "15_three_sum/three_sum_test.cpp"
# )
