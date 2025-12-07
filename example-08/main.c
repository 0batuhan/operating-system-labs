#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t child_pid;

    child_pid = fork();

    if (child_pid < 0) {
        perror("Error creating process");
        return 1;
    }

    if (child_pid > 0) {
        printf("[Parent] I am running with PID: %d\n", getpid());
        printf("[Parent] I created a child with PID: %d\n", child_pid);

        printf("[Parent] Sleeping for 15 seconds... (Child is now a ZOMBIE)\n");
        printf("--- Check terminal with 'ps -l' to see 'Z' or 'defunct' ---\n");
        
        sleep(15);

        printf("[Parent] Woke up. Exiting now.\n");
    }
    else {
        printf("[Child] Started. PID: %d\n", getpid());
        
        printf("[Child] Exiting immediately...\n");
        exit(0);
    }

    return 0;
}