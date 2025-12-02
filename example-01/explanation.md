# Basic I/O System Calls in C

This project demonstrates the usage of low-level POSIX system calls (`read` and `write`) in C, focusing on file descriptors and buffer handling. It serves as a simple example of how to interact with Standard Input (stdin) and Standard Output (stdout) without relying solely on the standard `stdio.h` library.

## 📂 Code Overview

The program consists of two primary functions demonstrating input and output operations:

### 1. `write_func`
* **Functionality:** Writes a string directly to the Standard Output (File Descriptor `1`) using the `write()` system call.
* **Return Value:** Captures the number of bytes written and prints it using `printf` to demonstrate mixed usage of system calls and standard library functions.

### 2. `read_func`
* **Functionality:** Reads input from Standard Input (File Descriptor `0`) into a buffer.
* **Echo Mechanism:** It immediately writes the captured input back to Standard Output, effectively acting as a simple echo program.

## 🛠 Prerequisites

* **GCC** (GNU Compiler Collection) or any standard C compiler.
* **Linux/Unix** environment (as `<unistd.h>` is a POSIX header).

## 🚀 How to Compile and Run

1.  **Compile the code:**
    ```bash
    gcc main.c -o io_demo
    ```

2.  **Run the executable:**
    ```bash
    ./io_demo
    ```

## 📝 Example Usage

When you run the program:
1. It will print `Hello` followed by the number of bytes written (5).
2. It will wait for your input. Type something and press Enter.
3. It will echo your input back to the console.

```text
Hello
value of n is 5
[Type text here] -> [Text is echoed back]

---

### **Option 2: Short & Concise (For a Gist)**
If you are posting this as a GitHub Gist or a small snippet, use this shorter version.

```markdown
# C `read` and `write` System Calls Example

A simple C program demonstrating the use of `<unistd.h>` system calls compared to standard library functions.

**Features:**
* Uses `write(1, ...)` to output data to stdout.
* Uses `read(0, ...)` to capture user input from stdin.
* Demonstrates handling return values from system calls (byte counts).

**Usage:**
```bash
gcc main.c -o app
./app

---

### **Explanation of Key Terms (for your context)**
* **`unistd.h`**: The header file that provides access to the POSIX operating system API (where `read` and `write` live).
* **File Descriptor 0**: Represents **Standard Input** (Keyboard).
* **File Descriptor 1**: Represents **Standard Output** (Screen/Console).

**Would you like me to add comments directly into the C code to make it easier for readers to understand each line?**