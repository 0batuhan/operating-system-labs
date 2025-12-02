#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t process_id;

    printf("System start...\n");

    process_id = fork();

    if (process_id < 0) {
        perror("Error during fork");
        return 1;
    } 
    else if (process_id == 0) {
        printf("Child process running. ID: %d\n", getpid());
        printf("Parent ID: %d\n", getppid());
    } 
    else {
        printf("Parent process running. ID: %d\n", getpid());
        printf("Child ID: %d\n", process_id);
    }

    printf("Both processes execute this\n");

    return 0;
}