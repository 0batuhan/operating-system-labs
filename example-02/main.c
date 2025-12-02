
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main() {
    int fd;
    ssize_t n;
    char buffer[100];

    // Open file in read-only mode
    fd = open("input.txt", O_RDONLY);
    if (fd < 0) {
        perror("open");
        exit(1);
    }

    // Read from file
    n = read(fd, buffer, sizeof(buffer) - 1);
    if (n < 0) {
        perror("read");
        close(fd);
        exit(1);
    }

    buffer[n] = '\0';

    // Write to stdout
    write(1, buffer, n);

    close(fd);
    return 0;
}