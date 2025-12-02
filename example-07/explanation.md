# Orphan Process Demonstration

A C program designed to demonstrate the concept of an **Orphan Process** in a Unix/Linux environment.

## 👻 What is an Orphan Process?

An orphan process is a running process whose parent process has finished or terminated. When this happens, the operating system (kernel) automatically re-parents the child process to the `init` process (PID 1) or the user's service manager (`systemd`).



## 📝 How This Code Works

This program intentionally forces an orphan state to observe the change in the Parent Process ID (PPID).

1.  **Fork:** A child process is created.
2.  **Parent Action:** The parent prints its details and **terminates immediately** while the child is still running.
3.  **Child Action:**
    * Prints its original Parent ID (PPID).
    * **Sleeps for 5 seconds:** This delay ensures the parent has enough time to completely terminate.
    * **Wakes Up:** The child prints its Parent ID again. Since the original parent is dead, the output will show a new PPID (usually `1` or the `systemd` user instance PID).

## 💻 Compilation and Execution

**1. Clone or Download the source code:**
   Save the code as `orphan.c`.

**2. Compile:**
```bash
gcc orphan.c -o orphan_demo
3. Run:

Bash

./orphan_demo
📄 Expected Output
Note: The specific PIDs will change every time you run it. Notice how the Parent ID changes in the last line.

Plaintext

[Parent] Running. My PID: 5000, Created Child: 5001
[Parent] My work is done. Terminating execution now.
[Child] Started. My PID: 5001, Current Parent: 5000
[Child] Pausing for 5 seconds to let parent finish...

... (5 seconds delay) ...

[Child] Resumed. My PID: 5001, New Parent (Adopter): 1
(Note: On modern Linux systems using systemd as a user manager, the New Parent ID might not be 1, but rather the PID of the systemd process managing your user session, e.g., 1450.)

📚 Technical Details
fork(): Creates the hierarchy.

sleep(5): Critical for pausing the child long enough for the parent to exit.

Adoption: The kernel ensures no process remains parentless; init (or similar) adopts orphans to clean up their exit status later (preventing them from becoming zombies).

📜 License
This project is open-source.