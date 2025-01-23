#include "utils.h"

#include "../libasm/libasm.h"


void assert_write() {
    int fd;
    char buffer[100];
    ssize_t ret;

    // Test 1: Write to stdout
    ret = _ft_write(1, "Hello, World!\n", 14);
    assert(ret == 14);

    // Test 2: Write to a file
    fd = open("test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    assert(fd != -1);
    ret = _ft_write(fd, "Hello, File!\n", 13);
    assert(ret == 13);
    close(fd);

    // Test 3: Write to a file and read back
    fd = open("test_file.txt", O_RDONLY);
    assert(fd != -1);
    ret = read(fd, buffer, 13);
    assert(ret == 13);
    buffer[ret] = '\0';
    assert(strcmp(buffer, "Hello, File!\n") == 0);
    close(fd);

    // Test 4: Write with invalid file descriptor
    ret = _ft_write(-1, "Invalid FD\n", 11);
    assert(ret == -1);
}

void _ft_write_test() {
    assert_write();
}

