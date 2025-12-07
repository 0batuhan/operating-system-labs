#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h> 
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int n, f;
    off_t f1; 
    char buff[10];
    struct stat file_stat;

    f = open("seeking", O_RDWR | O_CREAT, 0644);
    
    if (f < 0) {
        perror("File open error");
        exit(1);
    }

    if (fstat(f, &file_stat) < 0) {
        perror("File stat error");
        close(f);
        exit(1);
    }

    if (file_stat.st_size < 10) {
        fprintf(stderr, "File size is too small (%ld bytes), need at least 10 bytes\n", (long)file_stat.st_size);
        close(f);
        exit(1);
    }

    f1 = lseek(f, 10, SEEK_SET);

    if (f1 == (off_t)-1) {
        perror("Lseek error");
        close(f);
        exit(1);
    }

    printf("Pointer is currently at position %ld.\n", (long)f1);
    n = read(f, buff, 10);
    
    if (n < 0) {
        perror("Read error");
        close(f);
        exit(1);
    }

    if (n == 0) {
        fprintf(stderr, "Reached end of file, no data read\n");
        close(f);
        exit(1);
    }

    write(STDOUT_FILENO, buff, n); 
    write(STDOUT_FILENO, "\n", 1);
    close(f);

    return 0;
}