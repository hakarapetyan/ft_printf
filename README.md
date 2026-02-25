# 🖨️ ft_printf – Implementation of printf

### 📖 Project Overview
The ft_printf project is a reimagining of the standard printf function. The goal is to create a function that can print different types of data—such as text, integers, and memory addresses—all through a single command.

This project introduces Variadic Functions, which are special functions that can take any number of arguments. This makes the code very flexible and useful for debugging other programs.

### 🛠️ Project Details & Conversions

Specifier,What it does in my version

%c,Handles a single character.

%s,Displays a full string of text.

%p,Shows a memory address in hex format.

%d / %i,Converts integers into readable base-10 numbers.

%u,Specifically for unsigned (positive-only) numbers.

%x / %X,Translates numbers into hex (lowercase or uppercase).

%%,Simply prints a literal percent sign.

### 🚀 Key Technical Concepts
Variadic Functions
The core of this project is the use of variadic arguments. This allows ft_printf to accept any number of inputs after the format string.

We use the following macros from <stdarg.h>:

va_start: Initializes the argument list.

va_arg: Retrieves the next argument in the list based on a specific type.

va_end: Cleans up the memory used by the argument list.

### 📦 Instructions
Compilation
To compile the library:
```bash
make
```
