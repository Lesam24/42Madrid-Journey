*This project has been created as a part of the 42 curriculum by samsanch*

## 📚 Description

The **Libft** project consists on creating your own library in C from scratch. Replicating functions from the C language standard library `libc`, as well as additional functions for memory management and linked lists.

### 💡 Objectives

The objective of this project is to undestand how pointers, memory management and lists work in C. This project will be later used in various projects within the 42 curriculum, serving as a base throughout the cursus.

## 📝 Instructions

### 🖇️ Dependencies

You will need a UNIX compiler like `gcc` along with the `make` build tool.

### ⚙️ Compilation

Terminal must be opened in the root of the project. Use the following commands provided by Makefile.
```
- make: Compiles all files (.c) into binary files (.o) and packs them together in a static library file (libft.a)
- make clean: Deletes all binary files (.o) generated when compiling the project.
- make fclean: Deletes all binary files (.o) and the static library file (libft.a)
- make re: Rebuilds the entire library again. Performs a 'make fclean' to start from scratch and performes a 'make' to build the library again.
```

## 📚 Project overview
### Part 1: Libc functions
| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Checks if the character is alphabetic (`A-Z` or `a-z`). |
| `ft_isdigit` | Checks if the character is a digit (`0-9`). |
| `ft_isalnum` | Checks if the character is alphanumeric. |
| `ft_isascii` | Checks if the character fits into the ASCII character set (0 - 127). |
| `ft_isprint` | Checks for any printable character (including space). |
| `ft_strlen` | Calculates the length of a string, excluding the terminating `\0`. |
| `ft_memset` | Fills the first `len` bytes of memory with a constant byte. |
| `ft_bzero` | Erases the data in the primitive by writing zeros (`\0`) to it. |
| `ft_memcpy` | Copies bytes from memory area `src` to `dest` (non-overlapping). |
| `ft_memmove` | Copies bytes safely between overlapping memory areas. |
| `ft_strlcpy` | Size-bounded string copying that guarantees null-termination. |
| `ft_strlcat` | Size-bounded string concatenation that guarantees null-termination. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |
| `ft_strchr` | Locates the first occurrence of a character in a string. |
| `ft_strrchr` | Locates the last occurrence of a character in a string. |
| `ft_strncpy` | Copies up to `n` characters from `src` to `dest`. |
| `ft_strncmp` | Compares two strings up to `n` characters based on unsigned values. |
| `ft_memchr` | Scans memory for the first instance of a specific byte. |
| `ft_memcmp` | Compares the first `n` bytes of two memory areas. |
| `ft_strnstr` | Locates a substring within a string, searching up to a limited length. |
| `ft_atoi` | Converts the initial portion of a string into an integer. |
| `ft_calloc` | Allocates memory for an array and initializes all its bytes to zero. |
| `ft_strdup` | Duplicates a string by allocating dynamic memory for it. |
### Part 2: Additional functions
| Function | Description |
| :--- | :--- |
| `ft_substr` | Extracts a substring from a string at a specific starting index. |
| `ft_strjoin` | Allocates and returns a new string resulting from concatenating two strings. |
| `ft_strtrim` | Trims specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a character delimiter. |
| `ft_itoa` | Converts an integer value into a dynamically allocated string. |
| `ft_strmapi` | Applies a function to each character of a string to create a new mapped string. |
| `ft_striteri` | Applies a function sequentially to each character of a string in-place. |
| `ft_putchar_fd` | Outputs a character to the given file descriptor. |
| `ft_putstr_fd` | Outputs a string to the given file descriptor. |
| `ft_putendl_fd` | Outputs a string followed by a newline to the given file descriptor. |
| `ft_putnbr_fd` | Outputs an integer to the given file descriptor. |
### Part 3: Linked Lists
**Node Structure:**
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Allocates and returns a new node initialized with content. |
| `ft_lstadd_front` | Adds a node at the very beginning of the list. |
| `ft_lstsize` | Counts the total number of elements present in the list. |
| `ft_lstlast` | Returns the last element node of the list. |
| `ft_lstadd_back` | Adds a node at the very end of the list. |
| `ft_lstdelone` | Frees a single node's content and the node itself. |
| `ft_lstclear` | Deletes and frees a given node and all its successors. |
| `ft_lstiter` | Iterates over a list and applies a function to each node's content. |
| `ft_lstmap` | Iterates a list, modifying contents via a function to build a new list. |

## 🗂️ Resources used

- Linux Man Pages: Official documentation of the different behaviours of libc functions.

- https://devdocs.io/: Further documentatio on the specific behaviour of functions.

- https://pythontutor.com/c.html: Graphical testing of the function, enabled me to understand pointers graphically. 

- IA Usage: Used IA to get further information on function expectations, improve documentation and get tests to try and break the functions.