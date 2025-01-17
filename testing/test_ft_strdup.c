// #include <stdio.h>
// #include <unistd.h>
// #include <fcntl.h>
// #include <string.h>
// #include <assert.h>

// extern ssize_t _ft_read(int fd, void *buf, size_t count);

// void assert_read(int fd, size_t count, const char *label) {
//     char buf1[100] = {0};
//     char buf2[100] = {0};

//     ssize_t ret1 = read(fd, buf1, count);
//     lseek(fd, 0, SEEK_SET);  // Reset file descriptor position
//     ssize_t ret2 = _ft_read(fd, buf2, count);

//     printf("%s\n", label);
//     printf("Expected: %zd, Result: %zd\n", ret1, ret2);
//     assert(ret1 == ret2);
//     assert(memcmp(buf1, buf2, count) == 0);
// }

// void test_ft_read() {
//     int fd = open("test_file.txt", O_RDONLY);
//     if (fd == -1) {
//         perror("open");
//         return;
//     }

//     // Normal cases
//     assert_read(fd, 10, "Read 10 bytes");
//     assert_read(fd, 20, "Read 20 bytes");

//     // Edge cases
//     assert_read(fd, 0, "Read 0 bytes");
//     assert_read(fd, 100, "Read 100 bytes");

//     close(fd);
// }

