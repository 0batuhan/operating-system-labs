# File Descriptor Duplication (`dup`) in C

This program demonstrates the usage of the `dup()` system call in Linux/Unix. It explains how to create a duplicate file descriptor that points to the same open file description in the operating system kernel.

## 🧠 Core Concept

When you open a file, the OS assigns a **File Descriptor (FD)** (a small integer) to handle it. The `dup(old_fd)` function creates a **new** file descriptor that refers to the exact same open file as the `old_fd`.

* They share the same file offset (if you read from one, the position advances for both).
* They share the same file status flags.
* However, the integer values of the descriptors will be different.

## 🛠 Prerequisites

* **GCC Compiler**
* **A target file:** The code attempts to open a file named `dup`. You must create this file before running the program.

## ⚙️ How to Compile and Run

1.  **Create the dummy file:**
    ```bash
    touch dup
    ```

2.  **Compile the code:**
    ```bash
    gcc main.c -o dup_demo
    ```

3.  **Run the executable:**
    ```bash
    ./dup_demo
    ```

## 📊 Expected Output

If the program runs successfully (and standard input/output/error are 0, 1, 2), you will typically see:

```text
OLD file descriptor 3
NEW file descr. 4
3: The first available descriptor assigned to the file "dup".

4: The next available descriptor assigned to the duplicate.

Both 3 and 4 now point to the same file on the disk.


---

### **Visualizing the `dup()` Process**

To understand what `dup()` actually does inside the Operating System, it helps to look at the File Descriptor Table. Unlike a simple variable copy, `dup` creates a new entry in the process's file descriptor table, but points it to the *same* entry in the system-wide open file table.



---

### **Option 2: Short & Technical (For Gist)**

```markdown
# C `dup()` System Call Example

A minimal example showing how to duplicate a file descriptor in C.

**Description:**
The program opens a file named `"dup"` and uses the `dup()` system call to create a copy of the file descriptor. The new descriptor allows the program to access the same file using a different integer ID.

**Usage:**
```bash
touch dup          # Create the required file
gcc main.c -o app  # Compile
./app              # Run
Key Takeaway: fd1 = dup(fd) guarantees that fd1 will be the lowest numbered file descriptor available that is not currently open.


### **Important Note on Error Handling**
In your current code, if the file named `"dup"` does not exist, `open` will return `-1`. The program will then print `OLD file descriptor -1`.
To make the code more robust for GitHub, consider adding a check:

```c
if (fd < 0) {
    perror("Error opening file");
    return 1;
}