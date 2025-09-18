bool is_palindrome(int number) {
    int original = number;
    int reverse_number = 0;

    while (number != 0) {
        int digit = number % 10;
        reverse_number = (reverse_number * 10) + digit;
        number = number / 10;
    }

    return reverse_number == original;
}
