# 🐧 Operating Systems Laboratory

![Language](https://img.shields.io/badge/Language-C99-00599C?style=for-the-badge&logo=c&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-Linux%20%2F%20WSL-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![Standard](https://img.shields.io/badge/Standard-POSIX-green?style=for-the-badge)
![Compiler](https://img.shields.io/badge/Tools-GCC%20%7C%20Vim%20%7C%20VS%20Code-blue?style=for-the-badge)

> **A structured collection of low-level system programming modules, exploring process management, memory addressing, and IPC mechanisms within the Linux Kernel environment.**

## 📖 Project Overview

This repository serves as a technical archive for the **Operating Systems Laboratory** course. It is designed to demonstrate proficiency in **kernel-user space interactions** through the C programming language.

The curriculum follows a strict adherence to **POSIX system calls**, covering critical concepts such as:
* **Process Control:** `fork`, `exec`, `wait` mechanisms, and orphan/zombie state analysis.
* **Low-Level I/O:** Direct file descriptor manipulation using `open`, `read`, `write`.
* **IPC Patterns:** Inter-Process Communication via anonymous `pipe` and stream redirection.

## 📝 Module Curriculum & Status

| ID | Module Name | Key Concepts & System Calls | Status |
| :---: | :--- | :--- | :---: |
| **01** | Process Creation | `fork()`, PID/PPID retrieval, Process Control Block (PCB) basics | ✅ |
| **02** | Synchronization | `wait()`, deterministic execution order, state management | ✅ |
| **03** | Orphan Process | Parent termination, `init` / `systemd` adoption mechanics | ✅ |
| **04** | Zombie Process | Defunct processes, process table analysis, resource leaks | ✅ |
| **05** | Image Replacement | `execl()`, process memory overlay, context switching | ✅ |
| **06** | Execution Methods | `system()` vs `exec()` family performance comparison | ✅ |
| **07** | File I/O Basics | File descriptors, `open()`, `read()`, `write()`, `close()` | ✅ |
| **08** | Random Access | `lseek()`, manipulating file offsets, sparse files | ✅ |
| **09** | I/O Redirection | `dup()`, `dup2()`, STDOUT/STDERR stream manipulation | ✅ |
| **10** | Communication | `pipe()`, Unidirectional Data Flow, blocking vs non-blocking | ✅ |


## 📂 Repository Architecture

The project maintains a modular directory structure. Each module is a self-contained unit comprising the source code, technical documentation, and the build artifact.

```text
operating-systems-labs/
│
├── README.md               # 📘 Main Documentation
│
├── example-01/             # 📦 Process Creation Module
│   ├── main.c              # Source entry point
│   ├── explanation.md      # Logic & Syscall breakdown
│   └── app                 # Compiled Executable
│
├── example-02/             # 📦 Synchronization Module
│   └── ...
│
└── ... (Standardized structure across all 10 modules)

2. Compile the source:Bashgcc main.c -o app
3. Execute the binary:Bash./app
⚠️ Permission Notice: If you encounter a Permission denied error, grant execution rights via:Bashchmod +x app
💻 System EnvironmentThis project is engineered and tested on the following specifications:Operating System: Ubuntu LTS / Debian or Windows Subsystem for Linux (WSL2).Compiler: GCC (GNU Compiler Collection).Standards: C99 or higher / POSIX.1-2017.Maintained for the Operating Systems Laboratory Course.
