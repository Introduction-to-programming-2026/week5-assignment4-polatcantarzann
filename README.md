[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/xssVsStF)
# 🧠 Memory in C – Lab Exercises

Welcome to the **Memory Lab**! In this lab you will practice working with pointers, memory addresses, string copying, swapping values, and file I/O in C.

---

## 📁 Repository Structure

```
memory-lab/
├── exercises/
│   ├── 01-pointers/        ← Pointers & addresses
│   ├── 02-string-copy/     ← String copying
│   ├── 03-swap/            ← Swapping integers
│   └── 04-file-io/         ← File I/O
└── homework/               ← Homework assignment (due next class)
```

---

You can write it like this so it covers **both cases** (CS50 online environment and local compiler) and stays simple for students:

---

### 🛠️ How to Compile & Run

#### **Option 1 – Using CS50 Online Environment (cs50.dev)**

If you are working in the **CS50.dev**, use the `make` command:

```bash
make filename
./filename
```

Example:

```bash
make mario
./mario
```

The `make` command automatically compiles the program and links the **CS50 Library** if needed.

---

#### **Option 2 – Using a Local Compiler (GCC)**

If you are compiling on your **local computer**, use **GCC**:

```bash
gcc -o output_name filename.c
./output_name
```

Example:

```bash
gcc -o mario mario.c
./mario
```

If the program uses the **CS50 Library**, compile with:

```bash
gcc -o output_name filename.c -lcs50
./output_name
```

---

✅ **Recommendation:**
For this course, students should primarily use **CS50.dev** and the `make` command.

---

## ✅ Exercises Overview

| # | Topic | Folder |
|---|-------|--------|
| 1 | Pointers & Addresses | `exercises/01-pointers/` |
| 2 | String Copying | `exercises/02-string-copy/` |
| 3 | Swap Functions | `exercises/03-swap/` |
| 4 | File I/O | `exercises/04-file-io/` |

Complete each exercise in order. Read the comments inside each file — they will guide you!

---

## 📝 Homework

See the [`homework/`](./memory-lab/homework/) folder for your take-home assignment.  
**It is due at the start of the next class.**

Good luck! 🚀
