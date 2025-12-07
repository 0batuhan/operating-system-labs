#include <unistd.h>
#include <stdio.h>

int write_func() {
    ssize_t m = write(1, "Hello", 5);
    printf("\nvalue of m is %zd\n", m);
    return 0;
}

int read_func() {
    char b[30];
    ssize_t n = read(0, b, 30);
    if (n > 0) {
        write(1, b, n);
    }

    return 0;
}

int main() {
    write_func();
    read_func();

    return 0;
}