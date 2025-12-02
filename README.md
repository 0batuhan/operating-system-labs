# 🖥️ Operating Systems Labs

![Language](https://img.shields.io/badge/language-C-blue.svg)
![Platform](https://img.shields.io/badge/platform-Linux%2FUnix-lightgrey.svg)
![Topic](https://img.shields.io/badge/topic-System%20Programming-orange.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

> **A comprehensive collection of practical C examples and laboratory exercises exploring the fundamentals of Linux System Programming; covering process management, thread synchronization, signals, and IPC structures.**

## 📚 Contents & Roadmap

This repository is structured to follow the Unix/Linux system programming curriculum by CodeVault. Each directory focuses on a specific system call or core concept.

| Module | Directory | Topics & Learning Outcomes |
| :--- | :--- | :--- |
| **Part 1** | `01-Processes` | **Process Creation:** Deep dive into the `fork()` system call, process ID management (`getpid`), handling zombie processes, and `wait()` implementation. |
| **Part 2** | `02-IPC-Pipes` | **Inter-Process Communication:** Data transmission between processes. Communication via `pipe()`, `fifo` (named pipes), and bidirectional communication techniques. |
| **Part 3** | `03-Execution` | **Executing Programs:** Running external programs within C. Exploring the `exec` family of functions (`execl`, `execlp`, `execvp`, etc.). |
| **Part 4** | `04-Signals` | **Signal Handling:** Trapping and managing OS signals. Mastering `signal()`, `sigaction`, handling `SIGKILL`/`SIGSTOP`, and background processing. |
| **Part 5** | `05-Threads` | **Multithreading:** Introduction to parallel computing using the POSIX threads (`pthread`) library. Creating threads and using `pthread_join`. |
| **Part 6** | `06-Synchronization` | **Concurrency Control:** Addressing race conditions, implementing `mutex` locks, utilizing `semaphores`, and preventing deadlocks. |

## 🛠️ Build & Run

These projects are designed to run in a Linux environment.

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/yourusername/operating-systems-labs.git](https://github.com/yourusername/operating-systems-labs.git)
   cd operating-systems-labs
Navigate to the specific lab directory:

Bash

cd 02-IPC-Pipes
Compile and run:

Bash

gcc main.c -o app
./app
💡 Pro Tip: As you progress through the modules (especially when you reach the make topics), adding a Makefile to each directory will significantly streamline your workflow. It saves you from manually linking libraries (like -pthread) every time you compile.

🔗 References
This work is based on the following educational series:

CodeVault - Unix Processes in C (YouTube Playlist)

🤝 Contributing
If you notice a bug or have a suggestion for improvement, please feel free to open a Pull Request. Contributions are welcome!


### Yaptığım Önemli Değişiklikler ve Dokunuşlar:

1.  **Tanıtım Cümlesi (Blockquote):**
    * *Orijinal:* "Linux sistem programlama temellerini..."
    * *Çeviri:* "A comprehensive collection..." diyerek başladım. Bu, reponun sadece kod parçaları değil, kapsamlı bir koleksiyon olduğu hissini verir.

2.  **Tablo Başlıkları:**
    * "İçerik ve Kazanımlar" kısmını **"Topics & Learning Outcomes"** olarak çevirdim. Bu, akademik ve profesyonel repolarda sık kullanılan bir kalıptır.

3.  **Teknik Terimler:**
    * *Concurrency Control* (Eşzamanlılık Denetimi), *Deep dive* (Derinlemesine inceleme) gibi havalı ve sektör standardı terimler ekledim.

4.  **Makefile İpucu:**
    * Senin notunu bir **"Pro Tip"** kutusu haline getirdim. Böylece okuyan kişi, "Bunu yapan kişi işi biliyor ve bana yol gösteriyor" hissine kapılır.

5.  **GitHub Linki:**
    * `git clone` kısmındaki linke `yourusername` yazdım. Orayı kendi kullanıcı adınla değiştirmeyi unutma!
