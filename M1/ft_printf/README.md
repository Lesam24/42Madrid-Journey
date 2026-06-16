*This project has been created as a part of the 42 curriculum by samsanch*
## 📚 Description

The **printf** project consists con creating your own printf function in C from scratch. Replicating the function from the C language library `stdio`, handling `%c, %s, %p, %d, %i, %u, %x, %X and %%`.

## 📝 Instructions

### 🖇️ Dependencies

You will need a UNIX compiler like `gcc` along with the `make` build tool.

### ⚙️ Compilation

Terminal must be opened in the root of the project. Use the following commands provided by Makefile.

- make: Compiles all files (.c) into binary files (.o), together will calling `make` in libft and packs it all together in a static library file (libftprintf.a)
- make clean: Deletes all binary files (.o) generated when compiling the project, including in libft, calling `make clean` in libft's Makefile.
- make fclean: Deletes all binary files (.o) and the static library file (libft.a & libftprintf.a), calling `make fclean` in libft's Makefile.
- make re: Rebuilds the entire library again. Performs a `make fclean` to start from scratch and performes a `make` to build the library again.

## 📚 Project overview
| File | Description |
| :--- | :--- |
| `ft_printf` | Handles main function, chooses which function has to use to print the correct type. |
| `ft_misc_functions` | Handles pointers and hexadecimal miscellaneous functions to ensure correct. |
| `ft_print_numbers` | Handles the functions that print numbers (signed and unsigned). |
| `ft_print_words` | Handles the functions that print pointers, words, strings and hexadecimals |
| `libft/*.c` | All libft project functions. Some called in this project. |
## 🗂️ Resources used

- https://pythontutor.com/c.html: Graphical testing of the function, enabled me to understand pointers graphically. 

- IA Usage: Used IA to get further information on function expectations, improve documentation and get tests to try and break the functions.