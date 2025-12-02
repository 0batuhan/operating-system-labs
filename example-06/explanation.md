# Multiple Child Process Synchronization

A C program demonstrating how to create multiple child processes from a single parent and synchronize execution using `waitpid()`.

## 📖 Overview

This project explores advanced process management in Unix/Linux. Unlike a simple fork, this program creates **two distinct child processes** sequentially. It also demonstrates the use of `waitpid()` to force the parent process to wait for a specific child to terminate before proceeding with its final tasks.



## ⚙️ How It Works

1.  **First Fork:** The Parent creates **Child 1**.
2.  **Second Fork:** The Parent (and only the Parent) creates **Child 2**.
3.  **Synchronization:** The Parent calls `waitpid(child1, NULL, 0)`.
    * This pauses the Parent's execution until **Child 1** has finished.
    * This ensures the Parent does not print the final summary until the first child is done.
4.  **Reporting:** Finally, the Parent prints its own PID and the PIDs of both children it created.

## 🛠️ System Calls Used

* `fork()`: Creates a new process by duplicating the calling process.
* `waitpid(pid, status, options)`: Suspends execution of the calling process until a child specified by `pid` changes state.
* `getpid()` & `getppid()`: Retrieve current and parent process IDs.

## 💻 Compilation and Usage

**1. Compile the code:**
```bash
gcc main.c -o multi_fork
2. Run the executable:

Bash

./multi_fork


📄 Example Output

Note: The execution order of Child 1 and Child 2 may vary, but the Parent's final block will always execute after Child 1 due to waitpid.

Plaintext

Starting process creation...
First Child Process Running. ID: 8001
Parent of First Child: 8000
Second Child Process Running. ID: 8002
Parent of Second Child: 8000
Main Parent Process. ID: 8000
ID of First Child: 8001
ID of Second Child: 8002


📂 File Structure
main.c: The source code containing the logic for double forking and waiting.

📜 License
This project is open-source and available for educational purposes.


---

### What I can do next
Would you like me to modify the code so the parent waits for **both** children to finish before exiting, to prevent the second child from potentially becoming an "orphan" process for a split second?