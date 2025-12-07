#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main() {
    int fd;
    ssize_t n;
    char buffer[100];

    fd = open("input.txt", O_RDONLY);
    if (fd < 0) {
        perror("open");
        exit(1);
    }

    while ((n = read(fd, buffer, sizeof(buffer))) > 0) {
        write(1, buffer, n);
    }

    if (n < 0) {
        perror("read");
    }

    close(fd);
    return 0;
}