#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main()
{
    int fd, fd1;

    fd = open("dup", O_RDONLY);
    printf("OLD file descriptor %d\n", fd);
    fd1 = dup(fd);
    printf("NEW file descr. %d\n", fd1);

    return 0;
}