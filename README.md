# Caeser Cipher Encrypter and Decrypter

A Caeser Cipher Encryption and Decryption tool written in C++.

I have finally added cross platform Clear screen functions,
so now, any operating system can access and use this program.

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
