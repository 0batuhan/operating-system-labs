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
📝 Module Curriculum & StatusThe following matrix details the system calls and architectural concepts implemented during the assessment period.IDModule NameKey Concepts & System CallsStatus01Process Creationfork(), PID/PPID retrieval, Process Control Block (PCB) basics✅02Synchronizationwait(), deterministic execution order, state management✅03Orphan ProcessParent termination, init / systemd adoption mechanics✅04Zombie ProcessDefunct processes, process table analysis, resource leaks✅05Image Replacementexecl(), process memory overlay, context switching✅06Execution Methodssystem() vs exec() family performance comparison✅07File I/O BasicsFile descriptors, open(), read(), write(), close()✅08Random Accesslseek(), manipulating file offsets, sparse files✅09I/O Redirectiondup(), dup2(), STDOUT/STDERR stream manipulation✅10Communicationpipe(), Unidirectional Data Flow, blocking vs non-blocking✅🚀 Compilation & ExecutionEach module functions independently. The standard build process utilizes the GNU Compiler Collection (GCC).⚡ Quick Start1. Navigate to the target module:Bashcd example-01
2. Compile the source:Bashgcc main.c -o app
3. Execute the binary:Bash./app
⚠️ Permission Notice: If you encounter a Permission denied error, grant execution rights via:Bashchmod +x app
💻 System EnvironmentThis project is engineered and tested on the following specifications:Operating System: Ubuntu LTS / Debian or Windows Subsystem for Linux (WSL2).Compiler: GCC (GNU Compiler Collection).Standards: C99 or higher / POSIX.1-2017.Maintained for the Operating Systems Laboratory Course.
