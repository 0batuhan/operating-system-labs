#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/wait.h>

int main() {
    pid_t child1, child2;

    printf("Starting process creation...\n");

    child1 = fork();

    if (child1 == 0) {
        printf("First Child Process Running. ID: %d\n", getpid());
        printf("Parent of First Child: %d\n", getppid());
        return 0;
    }

    child2 = fork();

    if (child2 == 0) {
        printf("Second Child Process Running. ID: %d\n", getpid());
        printf("Parent of Second Child: %d\n", getppid());
        return 0;
    }

    waitpid(child1, NULL, 0);
    waitpid(child2, NULL, 0);

    printf("Main Parent Process. ID: %d\n", getpid());
    printf("ID of First Child: %d\n", child1);
    printf("ID of Second Child: %d\n", child2);

    return 0;
}