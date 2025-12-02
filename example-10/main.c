#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *execute_task(void *arg) {
    printf("[Thread] Started. Current ID: %lu\n", pthread_self());
    printf("[Thread] Processing task... (2 seconds)\n");
    
    sleep(2);
    
    printf("[Thread] Task execution finished.\n");
    return NULL;
}

int main() {
    pthread_t tid;
    int status;

    printf("[Main] Program started. PID: %d\n", getpid());
    printf("[Main] Spawning a new thread...\n");

    status = pthread_create(&tid, NULL, execute_task, NULL);

    if (status != 0) {
        perror("Failed to create thread");
        exit(1);
    }

    printf("[Main] Thread created successfully. Waiting for termination...\n");

    pthread_join(tid, NULL);

    printf("[Main] Thread joined. Exiting application.\n");

    return 0;
}