# Zombie Process Demonstration

A C program developed to demonstrate the creation and observation of a **Zombie Process** (Defunct Process) in a Unix/Linux operating system.

## 🧟 What is a Zombie Process?

A process becomes a "zombie" when it has finished execution via `exit()`, but its parent process has not yet read its exit status using the `wait()` system call. Until the parent retrieves this status, the operating system keeps the child's entry in the process table (retaining its Process ID).



[Image of zombie process state diagram]


## ⚙️ How This Code Works

1.  **Fork:** The program creates a new child process.
2.  **Child Execution:** The child process prints its PID and **exits immediately**.
3.  **Parent Execution:**
    * The parent **does not call** `wait()`.
    * Instead, the parent goes to **sleep for 15 seconds**.
4.  **The Result:** During these 15 seconds, the child is dead but its exit status is unread. It enters the **Zombie (Z)** state.

## 💻 Compilation and Usage

**1. Compile the code:**
```bash
gcc zombie.c -o zombie_demo
2. Run the executable:

Bash

./zombie_demo
🔍 How to Observe the Zombie
To actually see the zombie process, you need to check the process table while the parent is sleeping.

Open a second terminal window.

Run the program in the first window.

In the second window, immediately run:

Bash

ps -l
Or specifically search for zombies:

Bash

ps aux | grep 'Z'
Expected Output in Process Table: You will see a process marked with <defunct> or a state flag Z.

Plaintext

F S   UID   PID  PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
0 S  1000  5500  2890  0  80   0 -   550 hrtime pts/0    00:00:00 ./zombie_demo
1 Z  1000  5501  5500  0  80   0 -     0 -      pts/0    00:00:00 [zombie_demo] <defunct>
📄 Program Output
Plaintext

[Parent] I am running with PID: 5500
[Parent] I created a child with PID: 5501
[Parent] Sleeping for 15 seconds... (Child is now a ZOMBIE)
--- Check terminal with 'ps -l' to see 'Z' or 'defunct' ---
[Child] Started. PID: 5501
[Child] Exiting immediately...

... (15 seconds later) ...

[Parent] Woke up. Exiting now.
s
📜 License
This project is open-source and available for educational purposes.