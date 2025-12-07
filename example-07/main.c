#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t id_val;

    id_val = fork();

    if (id_val < 0) {
        perror("Process creation failed");
        return 1;
    }

    if (id_val > 0) {
        printf("[Parent] Running. My PID: %d, Created Child: %d\n", getpid(), id_val);
        
        printf("[Parent] My work is done. Terminating execution now.\n");
    }
    else {
        printf("[Child] Started. My PID: %d, Current Parent: %d\n", getpid(), getppid());

        printf("[Child] Pausing for 5 seconds to let parent finish...\n");
        sleep(5);

        printf("[Child] Resumed. My PID: %d, New Parent (Adopter): %d\n", getpid(), getppid());
    }

    return 0;
}