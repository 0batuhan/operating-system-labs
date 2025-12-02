# Basic Process Creation with Fork

A simple C program demonstrating process creation and management using the `fork()` system call in a Unix/Linux environment.

## 📝 Overview

This project illustrates the fundamental concept of process duplication. It uses the `fork()` system call to create a new process (child) from an existing process (parent). The program differentiates between the two processes by checking the return value of `fork()` and prints the Process ID (PID) for each.



## 🚀 How It Works

1.  **Forking:** The program calls `fork()`, which creates an exact copy of the calling process.
2.  **Return Values:**
    * **`< 0`**: The fork failed.
    * **`== 0`**: We are inside the **Child** process.
    * **`> 0`**: We are inside the **Parent** process (the value returned is the Child's PID).
3.  **Execution:** Both processes continue execution but take different paths in the `if-else` block based on the return value.
4.  **Completion:** Both processes execute the final print statement after the conditional blocks.

## 🛠️ Prerequisites

* A GCC compiler (or any standard C compiler).
* A Unix/Linux operating system (MacOS, Linux, WSL).

## 💻 Compilation and Usage

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/your-username/your-repo-name.git](https://github.com/your-username/your-repo-name.git)
    cd your-repo-name
    ```

2.  **Compile the code:**
    ```bash
    gcc main.c -o process_demo
    ```

3.  **Run the executable:**
    ```bash
    ./process_demo
    ```

## 📄 Example Output

*Note: The order of the output lines may vary depending on the operating system's process scheduling.*

```text
System start...
Parent process running. ID: 12345
Child ID: 12346
Both processes execute this
Child process running. ID: 12346
Parent ID: 12345
Both processes execute this
📚 Libraries Used
<stdio.h>: For standard I/O operations (printf, perror).

<unistd.h>: For the fork(), getpid(), and getppid() system calls.

<sys/types.h>: For the pid_t data type definition.

📜 License
This project is open-source and available for educational purposes.


---

### What I can do next
Would you like me to add a section about **"Zombie Processes"** or **"Wait System Call"** to this README to explain what happens if the parent finishes before the child?