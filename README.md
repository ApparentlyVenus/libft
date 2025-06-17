# Libft - Custom C Library

## ✔️ 125/100


A comprehensive reimplementation of essential C standard library functions, plus additional utility functions for string manipulation, memory management, and linked list operations.

## 📚 About

Libft is a foundational project that recreates many of the standard C library functions from scratch. This library serves as the base for many other 42 School projects and provides a deep understanding of how these fundamental functions work under the hood.

## 🛠️ Functions Included

### String Functions
- `ft_strlen` - Calculate string length
- `ft_strchr` - Locate character in string
- `ft_strrchr` - Locate character in string (reverse search)
- `ft_strncmp` - Compare strings up to n characters
- `ft_strnstr` - Locate substring in string
- `ft_strdup` - Duplicate string
- `ft_substr` - Extract substring
- `ft_strjoin` - Concatenate two strings
- `ft_strtrim` - Trim characters from string
- `ft_split` - Split string by delimiter
- `ft_strmapi` - Apply function to each character
- `ft_striteri` - Apply function to each character with index

### Character Functions
- `ft_isalpha` - Check if alphabetic
- `ft_isdigit` - Check if digit
- `ft_isalnum` - Check if alphanumeric
- `ft_isascii` - Check if ASCII character
- `ft_isprint` - Check if printable character
- `ft_toupper` - Convert to uppercase
- `ft_tolower` - Convert to lowercase

### Memory Functions
- `ft_memset` - Fill memory with constant byte
- `ft_bzero` - Zero out memory
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area (handles overlap)
- `ft_memchr` - Scan memory for character
- `ft_memcmp` - Compare memory areas
- `ft_calloc` - Allocate and zero memory

### Conversion Functions
- `ft_atoi` - Convert string to integer
- `ft_itoa` - Convert integer to string

### File Descriptor Functions
- `ft_putchar_fd` - Output character to file descriptor
- `ft_putstr_fd` - Output string to file descriptor
- `ft_putendl_fd` - Output string with newline to file descriptor
- `ft_putnbr_fd` - Output number to file descriptor

### Linked List Functions (Bonus)
- `ft_lstnew` - Create new list element
- `ft_lstadd_front` - Add element to front of list
- `ft_lstsize` - Count list elements
- `ft_lstlast` - Get last element of list
- `ft_lstadd_back` - Add element to back of list
- `ft_lstdelone` - Delete one list element
- `ft_lstclear` - Delete and free list
- `ft_lstiter` - Apply function to each element
- `ft_lstmap` - Apply function and create new list

## 🚀 Compilation

### Basic Library
```bash
make            # Compile libft.a
make clean      # Remove object files
make fclean     # Remove object files and library
make re         # Recompile everything
```

### With Bonus Functions
```bash
make bonus      # Compile with linked list functions
```

## 📦 Usage

1. **Include the library in your project**:
   ```c
   #include "libft.h"
   ```

2. **Compile with your project**:
   ```bash
   gcc -Wall -Wextra -Werror your_file.c -L. -lft
   ```

3. **Example usage**:
   ```c
   #include "libft.h"
   
   int main(void)
   {
       char *str = ft_strdup("Hello, World!");
       char **split = ft_split(str, ' ');
       int len = ft_strlen(str);
       
       ft_putstr_fd(str, 1);
       ft_putchar_fd('\n', 1);
       ft_putnbr_fd(len, 1);
       
       free(str);
       // Free split array...
       return (0);
   }
   ```

## 🏗️ Project Structure

```
libft/
├── src/                    # Source files
│   ├── ft_*.c             # Function implementations
│   └── ft_lst*.c          # Bonus linked list functions
├── inc/
│   └── libft.h            # Header file with prototypes
├── Makefile               # Build configuration
└── README.md              # This file
```

## 🔍 Key Features

### Memory Safety
- All functions handle NULL pointers gracefully
- Proper memory allocation and deallocation
- Protection against buffer overflows

### Standard Compliance
- Functions behave identically to their standard library counterparts
- Proper error handling and return values
- Consistent naming conventions

### Optimization
- Efficient algorithms for string and memory operations
- Minimal memory footprint
- Fast execution times

## 🧪 Testing

The library has been thoroughly tested with:
- **Unit Tests**: Each function tested individually
- **Edge Cases**: NULL pointers, empty strings, boundary conditions
- **Memory Leaks**: Valgrind testing for memory management
- **Integration Tests**: Functions working together

## 📝 Coding Standards

This project follows 42 School's strict coding standards:
- **Norm Compliance**: All code follows the 42 Norm
- **Function Length**: Maximum 25 lines per function
- **Variable Declarations**: At the beginning of functions
- **Error Handling**: Robust error checking throughout

## 🤝 Contributing

While this is a school project, suggestions and improvements are welcome:
- Report bugs or inconsistencies
- Suggest optimizations
- Provide additional test cases
- Improve documentation

## 📋 Requirements

- **GCC**: GNU Compiler Collection
- **Make**: Build automation tool
- **ar**: Archive utility for creating static libraries

## 🔧 Makefile Targets

- `all`: Default target, builds libft.a
- `clean`: Remove object files
- `fclean`: Remove object files and library
- `re`: Clean and rebuild
- `bonus`: Include bonus linked list functions

## 📚 Educational Value

This project teaches:
- **Low-level Programming**: Understanding how standard functions work
- **Memory Management**: Manual allocation and deallocation
- **Data Structures**: Linked list implementation and manipulation
- **Algorithm Design**: Efficient string and memory operations
- **Software Engineering**: Modular design and code organization

## 🎯 Performance Notes

- Functions are optimized for both speed and memory usage
- String functions handle edge cases efficiently
- Memory functions use optimal copy strategies
- Linked list operations maintain O(1) or O(n) complexity as appropriate

---

**A solid foundation for C programming!** 📖
