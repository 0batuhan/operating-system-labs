# Process Image Replacement using Exec

A C program demonstrating the interaction between process creation (`fork`) and process image replacement (`exec`) in a Unix/Linux environment.

## 🚀 Overview

This project illustrates a fundamental concept in operating systems: how a process can execute a different program. Unlike a standard function call, the `exec` family of system calls replaces the current process's memory (code, data, heap, and stack) with a new executable.

In this example, a C program creates a child process, which then transforms itself into the standard `ls` (list directory) command.



## ⚙️ How It Works

1.  **Fork:** The parent process creates a duplicate of itself (the child).
2.  **differentiation:** The code checks if it is the Parent or the Child.
3.  **Exec (Child Step):**
    * The child calls `execl("/bin/ls", "ls", "-l", NULL)`.
    * This command **replaces** the running C program in memory with the `/bin/ls` binary.
    * The child process effectively "becomes" the `ls` command.
4.  **Wait (Parent Step):**
    * The parent calls `wait(NULL)` to pause execution until the child (now running `ls`) finishes its task.

## 🛠️ System Calls Used

* **`fork()`**: Creates a new process.
* **`execl(path, arg0, arg1, ..., NULL)`**: Replaces the current process image with a new process image.
* **`wait(NULL)`**: Suspends the calling process until the child terminates.

## 💻 Compilation and Usage

**1. Clone or Save the file:**
   Save the code as `exec_demo.c`.

**2. Compile the code:**
```bash
gcc exec_demo.c -o exec_demo
3. Run the executable:

Bash

./exec_demo
📄 Expected Output
When you run the program, you will see the C program start, followed by the output of the ls -l command (your directory listing), and finally the parent confirming completion.

Plaintext

System active. Attempting to launch external program...
Parent (ID: 1200) waiting for child termination...
Child (ID: 1201) replacing memory with 'ls -l'...
total 32
-rwxr-xr-x 1 user user 16700 Dec 2 20:30 exec_demo
-rw-r--r-- 1 user user   650 Dec 2 20:29 exec_demo.c
Parent: Child task finished. Exiting.
⚠️ Important Note
If the execl() call is successful, the lines of code after it in the child block are never executed, because the program instructions have been overwritten by the new program.

📜 License
This project is open-source and available for educational purposes.