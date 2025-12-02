File Seeking and Reading Example in C

This program demonstrates how to work with low-level file operations in C using system calls such as open(), lseek(), read(), and write().
It shows how to manually move the file pointer to a specific position and read data from that location.

📌 Features

Opens a file named seeking in read–write mode.

Moves the file pointer 10 bytes from the beginning using lseek().

Displays the current pointer position.

Reads 10 bytes starting from the new position.

Writes the read bytes to the terminal (stdout).

Handles error cases using perror() for clear debugging output.

🧠 How It Works

File Opening
The program uses:

f = open("seeking", O_RDWR);


If the file cannot be opened, an error is printed.

Moving the File Pointer
The pointer is moved to byte 10 from the beginning:

f1 = lseek(f, 10, SEEK_SET);


This allows reading data starting at an arbitrary position in the file.

Reading Data
The program reads 10 bytes starting from the new pointer position:

n = read(f, buff, 10);


Writing Output
The read data is written to standard output:

write(STDOUT_FILENO, buff, n);

🗂 Example Use Cases

Inspecting file contents at specific offsets

Building custom file parsers

Low-level system programming exercises

Understanding Unix/Linux file handling mechanics

🛠 Requirements

GCC or any POSIX-compliant C compiler

Linux/Unix-based operating system

A file named seeking in the same directory as the program

▶️ Compilation & Execution
gcc seeking_example.c -o seeking_example
./seeking_example


Make sure the file seeking exists and contains enough data.