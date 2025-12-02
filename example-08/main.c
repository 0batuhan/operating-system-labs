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

    // MANTIK AYNI, YAPI FARKLI:
    // Once Parent surecini kontrol ediyoruz (pid > 0)
    if (child_pid > 0) {
        // --- PARENT PROCESS ---
        printf("[Parent] I am running with PID: %d\n", getpid());
        printf("[Parent] I created a child with PID: %d\n", child_pid);

        // Parent uyurken wait() cagirmadigi icin, olen cocuk ZOMBI olacak.
        printf("[Parent] Sleeping for 15 seconds... (Child is now a ZOMBIE)\n");
        printf("--- Check terminal with 'ps -l' to see 'Z' or 'defunct' ---\n");
        
        sleep(15);

        printf("[Parent] Woke up. Exiting now.\n");
    }
    else {
        // --- CHILD PROCESS ---
        printf("[Child] Started. PID: %d\n", getpid());
        
        // Cocuk isini hemen bitiriyor ve cikiyor.
        printf("[Child] Exiting immediately...\n");
        exit(0);
    }

    return 0;
}