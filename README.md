_This project has been created as part of the 42 curriculum by aluzardo_

---

# Description

Libft is the first project of the 42 curriculum. The goal is to build our own C library from scratch. By doing this, we learn how standard functions work internally, how to work with linked lists, and how a static library is built in C.

## Project Structure

```bash
libft/
├── Makefile
├── README.md
├── libft.h
├── ft_*.c # functions
└── libft.a # generated after running make
```

## Library Description

### Libc Functions

#### Character classification

- `ft_isalpha` — checks if a character is a letter
- `ft_isdigit` — checks if a character is a digit
- `ft_isalnum` — checks if a character is a letter or a digit
- `ft_isascii` — checks if a character is in the ASCII table
- `ft_isprint` — checks if a character is printable
- `ft_toupper` — converts a letter to uppercase
- `ft_tolower` — converts a letter to lowercase

#### Memory

- `ft_memset` — fills a memory block with a given value
- `ft_bzero` — sets a memory block to zero
- `ft_memcpy` — copies a memory block to another location
- `ft_memmove` — copies a memory block safely, even if they overlap
- `ft_memchr` — searches for a byte in a memory block
- `ft_memcmp` — compares two memory blocks
- `ft_calloc` — allocates memory and sets it to zero

#### String

- `ft_strlen` — returns the length of a string
- `ft_strchr` — finds the first occurrence of a character in a string
- `ft_strrchr` — finds the last occurrence of a character in a string
- `ft_strncmp` — compares two strings up to n characters
- `ft_strnstr` — finds a substring inside a string up to n characters
- `ft_strlcpy` — copies a string into a buffer with a size limit
- `ft_strlcat` — adds a string to a buffer with a size limit
- `ft_atoi` — converts a string to an integer
- `ft_strdup` — makes a copy of a string in a new memory block

### Additional Functions

- `ft_substr` — returns a part of a string starting at a given position
- `ft_strjoin` — joins two strings into a new one
- `ft_strtrim` — removes given characters from the start and end of a string
- `ft_split` — splits a string into an array of strings using a delimiter
- `ft_itoa` — converts an integer to a string
- `ft_strmapi` — applies a function to each character of a string and returns a new one
- `ft_striteri` — applies a function to each character of a string, modifying it directly
- `ft_putchar_fd` — writes a character to a file descriptor
- `ft_putstr_fd` — writes a string to a file descriptor
- `ft_putendl_fd` — writes a string followed by a newline to a file descriptor
- `ft_putnbr_fd` — writes an integer to a file descriptor

### Linked List Functions

- `ft_lstnew` — creates a new list node with given content
- `ft_lstadd_front` — adds a node at the start of a list
- `ft_lstadd_back` — adds a node at the end of a list
- `ft_lstsize` — returns the number of nodes in a list
- `ft_lstlast` — returns the last node of a list
- `ft_lstdelone` — deletes and frees a single node
- `ft_lstclear` — deletes and frees all nodes in a list
- `ft_lstiter` — applies a function to each node in a list
- `ft_lstmap` — creates a new list by applying a function to each node

---

# Instructions

## Compilation

Clone the repository and run:

```bash
make <rule>
```

Available rules:

- `make` / `make all` — compiles the library and generates `libft.a`
- `make clean` — removes object files (`.o`)
- `make fclean` — removes object files and `libft.a`
- `make re` — runs `fclean` and `all`

## Usage

Place the `libft` directory into your project. Include the header in your source file:

```c
#include "libft/libft.h"
```

Then compile linking the library:

```bash
cc main.c -L./libft -lft -o program_name
```

---

## Resources

### References

- [Man pages](https://man7.org/linux/man-pages/) — primary reference for standard C library functions
- `man` command — used directly in the terminal for quick function lookups
- [Stack Overflow](https://stackoverflow.com/) — troubleshooting and community solutions
- [Linked Lists Tutorial](https://www.youtube.com/watch?v=3-u5SRuStuc&t=890s) — video guide on linked lists concepts and implementation
- [How to write a good Makefile](https://dev.to/djsurgeon/como-hacer-un-buen-makefile-2pol) — guide on Makefile structure and best practices

### AI Usage

AI was not used to generate or write any code. It was used from time to time as a learning tool to help understand complex concepts through explanations.
