# Caeser Cipher Encrypter and Decrypter

A Caeser Cipher Encryption and Decryption tool written in C++.

Warning, this is a old project, where I haven't added cross platform
terminal clearing, this is a project made when I was still a beginner,
ensure when using this tool you are on Windows, I apologize
for anyone on other Systems. I am planning to modify the source code soon.

### Features
- Encrypt Messages
- Decrypt Messages
- Usable in a bare bones terminal

### Requirements
- Code Editor (e.g., Visual Studio Code, Code::Blocks, etc)
- Mingw64 Compiler
- GCC or G++

### How to Compile
Please type this following command in your terminal, if you aren't in the specific directory of the
source file, please change your directory.

G++ Compiler
```bash
g++ main.cpp -o caeser.exe
```

GCC Compiler
```bash
gcc main.cipp -o caeser.exe
```

### How to Use
Launch the excecutable and do these follwing commands:

- `enc`   - Encrypt a Message
- `dec`   - Decrypt a Message
- `ed`    - Encrypt a Message then Decrypt the message
- `help`  - Show all commands
- `clear` - Clear screen
- `exit`  - Exit Program

### Example
```
ENCRYPTER > enc

ENTER YOUR MESSAGE > hello
ENCRYPTED: khoor
```
