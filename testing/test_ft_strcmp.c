

#include "utils.h"

#include "../libasm/libasm.h"

void assert_strcmp(const char *s1, const char *s2, const char *label) {
    int expected = strcmp(s1, s2);
    int result = _ft_strcmp(s1, s2);

    printf("%s\n", label);
    printf("Expected: %d, Result: %d\n", expected, result);
    if((expected == 0 && result == 0) || (expected < 0 && result < 0) || (expected > 0 && result > 0)) {
        printf_color("green", "OK\n");
    } else {
        printf_color("red", "KO\n");
    }
  
}

void _ft_strcmp_test() {

    print_header("ft_strcmp");

    // Normal cases
    assert_strcmp("Hello", "Hello", "Compare 'Hello' with 'Hello'");
    assert_strcmp("Hello", "World", "Compare 'Hello' with 'World'");
    assert_strcmp("abc", "abcd", "Compare 'abc' with 'abcd'");
    assert_strcmp("abcd", "abc", "Compare 'abcd' with 'abc'");

    // Edge cases
    assert_strcmp("", "", "Compare empty strings");
    assert_strcmp("A", "A", "Compare single characters");
    assert_strcmp("A", "B", "Compare different single characters");
    assert_strcmp("A", "", "Compare single character with empty string");
    assert_strcmp("", "A", "Compare empty string with single character");
}