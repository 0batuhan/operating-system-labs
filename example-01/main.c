#include <unistd.h>
#include <stdio.h>

int write_func(int m) {
    m = write(1, "Hello", 5);
    printf("\nvalue of n is %d\n", m);
    return 0;
}

int read_func(int n) {
    char b[30];
    n = read(0, b, 30);
    write(1, b, n);
    return 0;
}

int main() {
    int n;
    int m;

    write_func(n);
    read_func(m);

    return 0;
}