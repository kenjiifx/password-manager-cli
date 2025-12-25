# Password Manager (CLI Tool)

A secure command-line password manager built in **C** for Linux environments.

This project demonstrates systems-level programming, manual memory management,
secure file handling, and encrypted credential storage using a custom XOR-based
encoding scheme.

---

## 🔐 Features

- Store and retrieve credentials directly from the terminal
- Custom XOR-based encryption for stored passwords
- Persistent encrypted storage using Linux file I/O
- Strict input validation to prevent buffer overflows
- Multi-file C project with clear separation of concerns

---

## 🛠 Tech Stack

- **Language:** C  
- **Platform:** Linux (tested on Ubuntu / WSL)  
- **Build Tools:** GCC + Make  
- **Storage:** Local encrypted file  

---

## 📁 Project Structure

```text
pwd_mngr/
├── src/
│   ├── main.c        # CLI interface
│   ├── crypto.c     # XOR encryption logic
│   ├── utils.c      # Input validation helpers
│   └── vault.c      # Encrypted credential storage
├── include/
│   ├── crypto.h
│   ├── utils.h
│   └── vault.h
├── data/
│   └── vault.dat    # Encrypted credential store
├── Makefile
└── README.md
