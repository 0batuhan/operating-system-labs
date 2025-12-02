# Basic Multithreading with Pthreads

A C program demonstrating the fundamentals of thread creation and synchronization using the **POSIX Threads (pthread)** library.

## 🧵 Overview

This project illustrates how a single process can perform tasks concurrently using threads. Unlike `fork()`, which creates a separate process with its own memory space, threads share the same memory space within a process but execute independently.



[Image of multithreading process diagram]


## ⚙️ How It Works

1.  **Initialization:** The Main Thread starts and prints its Process ID (PID).
2.  **Thread Creation:** The program calls `pthread_create()` to spawn a new worker thread (`execute_task`).
3.  **Concurrent Execution:**
    * The **Worker Thread** prints its unique Thread ID, performs a simulated task (sleeping for 2 seconds), and finishes.
    * The **Main Thread** waits immediately for the worker to finish.
4.  **Synchronization:** The `pthread_join()` function blocks the Main Thread until the Worker Thread terminates, ensuring the program doesn't exit prematurely.

## 🛠️ Functions Used

* **`pthread_create`**: Starts a new thread in the calling process.
* **`pthread_join`**: Waits for a specific thread to terminate (similar to `wait` for processes).
* **`pthread_self`**: Returns the unique ID of the calling thread.

## 💻 Compilation and Usage

**Important:** When compiling code with pthreads on Linux, you must link the pthread library using the `-pthread` flag.

**1. Compile the code:**
```bash
gcc thread_demo.c -o thread_demo -pthread
2. Run the executable:

Bash

./thread_demo
📄 Example Output
Note: The Thread ID is a long unsigned integer and will vary on every run.

Plaintext

[Main] Program started. PID: 8000
[Main] Spawning a new thread...
[Main] Thread created successfully. Waiting for termination...
[Thread] Started. Current ID: 140348721342208
[Thread] Processing task... (2 seconds)
[Thread] Task execution finished.
[Main] Thread joined. Exiting application.
⚠️ Key Differences (Fork vs Thread)
Fork: Creates a copy of the process. Parent and Child have separate memory.

Thread: Runs inside the same process. Threads share global variables and heap memory.

📜 License
This project is open-source and available for educational purposes.