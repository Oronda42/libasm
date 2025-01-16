#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "utils.h"

extern char *_ft_strcpy(char *dest, const char *src);

void assert_string_copy(const char *src, char *label) {
    char dest[100];  // Ensure the destination buffer is large enough
    char expected[100];

    strcpy(expected, src);
    _ft_strcpy(dest, src);

    printf("%s\n\t", label);
    printf("Expected: %s\n", expected);
    printf("Result: %s\n", dest);
    assert(strcmp(expected, dest) == 0);
}

void test_ft_strcpy() {
    print_header("ft_strcpy");

    // Normal cases
    assert_string_copy("hello world", "hello world");
    assert_string_copy("pouic", "pouic");
    assert_string_copy("pouet", "pouet");

    // Edge cases
    assert_string_copy("a", "single character");
    assert_string_copy("ab", "two characters");
    assert_string_copy("abc", "three characters");
    assert_string_copy("abcdefghijklmnopqrstuvwxyz", "alphabet");
    assert_string_copy("ABCDEFGHIJKLMNOPQRSTUVWXYZ", "uppercase alphabet");
    assert_string_copy("1234567890", "numbers");
    assert_string_copy("!@#$%^&*()", "special characters");
    assert_string_copy(" \t\n\r", "whitespace characters");
    assert_string_copy("long string with multiple words and spaces", "long string");

    // Very long string
    char long_string[1001];
    for (int i = 0; i < 1000; i++) {
        long_string[i] = 'a';
    }
    long_string[1000] = '\0';
    assert_string_copy(long_string, "very long string (1000 'a's)");

    // Null terminator in the middle
    char mid_null_string[] = "hello\0world";
    assert_string_copy(mid_null_string, "null terminator in the middle");

    // Strings with embedded null characters
    char embedded_null_string[] = {'a', 'b', '\0', 'c', 'd', '\0'};
    assert_string_copy(embedded_null_string, "embedded null characters");

    // Unicode characters (assuming UTF-8 encoding)
    assert_string_copy("こんにちは", "Japanese characters");
    assert_string_copy("안녕하세요", "Korean characters");
    assert_string_copy("你好", "Chinese characters");
}

int main() {
    test_ft_strcpy();
    return 0;
}