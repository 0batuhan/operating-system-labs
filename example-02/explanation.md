# File I/O using System Calls in C

This repository contains a C program that demonstrates low-level file handling using POSIX system calls. Unlike the standard `FILE *` pointers (fopen, fprintf), this example uses file descriptors to interact directly with the operating system kernel.

## 📋 Code Description

The program performs the following operations:
1.  **Open:** Attempts to open a file named `input.txt` in read-only mode using `open()`.
2.  **Error Handling:** Checks if the file opened successfully. If not, it uses `perror()` to print the exact system error message.
3.  **Read:** Reads data from the file into a buffer using `read()`.
4.  **Write:** Outputs the content directly to Standard Output (terminal) using `write()`.
5.  **Close:** Properly closes the file descriptor to free resources.

## 🛠 Dependencies
* **Linux/Unix Environment** (Required for `<unistd.h>` and `<fcntl.h>`).
* **GCC Compiler**.

## ⚙️ Setup & Usage

### 1. Create the Input File
Before running the program, you must create a text file named `input.txt` in the same directory.

```bash
echo "Hello from the file system!" > input.txt
2. Compile the Code
Bash

gcc main.c -o file_reader
3. Run the Program
Bash

./file_reader
🔍 Key Concepts
File Descriptors (fd): An integer returned by the OS to identify an open file.

0: Standard Input

1: Standard Output

2: Standard Error

>2: Custom files (like input.txt in this example).

O_RDONLY: A flag from <fcntl.h> specifying that the file should be opened for reading only.

perror(): A helper function that prints a descriptive error message based on the global errno variable (e.g., "No such file or directory").


---

### **Option 2: Short & Technical (For Gist/Snippet)**

```markdown
# C Low-Level File Reading Example

A minimal example demonstrating how to read a file and print it to stdout using POSIX system calls (`open`, `read`, `write`) instead of the standard C library (`stdio`).

**Prerequisites:**
You need a file named `input.txt` in the working directory.

**Code Logic:**
1. Opens `input.txt` (Read-only).
2. Checks for `fd < 0` (Error handling).
3. Reads up to 99 bytes into a buffer.
4. Writes the buffer content to file descriptor `1` (stdout).
5. Closes the file.

**Compilation:**
```bash
gcc main.c -o read_file
./read_file

---

### **Technical Note on the Diagram**

To better understand how this code works behind the scenes, it helps to visualize the flow of data between the User Space (your code) and the Kernel Space (the OS) . When `open` or `read` is called, the program switches to Kernel mode to access the hardware (disk), then returns the data to your buffer in User mode.

### **What I changed/Added in the description:**
1.  **`input.txt` Warning:** The most common error with this code is not having the file exist. I added a step to create it.
2.  **`fcntl.h` Mention:** I noted that this library is required for the `O_RDONLY` flag.
3.  **Error Handling:** I highlighted `perror`, which is excellent practice in your code.

**Would you like me to modify the code so it takes the filename as a command-line argument (e.g., `./program my_file.txt`) instead of hardcoding "input.txt"?**