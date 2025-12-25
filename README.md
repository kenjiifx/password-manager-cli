**Password Manager (CLI Tool)**



A secure command-line password manager built in \*\*C\*\* for Linux environments.  

This project demonstrates low-level systems programming, manual memory management,

and secure file handling.



---



**🔐 Features
**


\- Store and retrieve credentials from the terminal

\- XOR-based encryption for stored passwords

\- Persistent encrypted storage using Linux file handling

\- Strict input validation to prevent buffer overflows

\- Multi-file C project with clean separation of concerns



---



**🛠 Tech Stack
**


\- \*\*Language:\*\* C  

\- \*\*Platform:\*\* Linux (tested on Ubuntu / WSL)  

\- \*\*Build Tool:\*\* GCC + Make  

\- \*\*Storage:\*\* Local encrypted file  



---



**📁 Project Structure**



pwd\_mngr/

├── src/

│ ├── main.c # CLI interface

│ ├── crypto.c # XOR encryption logic

│ └── storage.c # File I/O for credentials

├── include/

│ ├── crypto.h

│ └── storage.h

├── Makefile

├── passwords.dat # Encrypted credential store

└── README.md


