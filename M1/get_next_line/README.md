*This project has been created as a part of the 42 curriculum by samsanch*
## 📚 Description



## 📝 Instructions

### 🖇️ Dependencies

You will need a UNIX compiler like `gcc`.

### ⚙️ Compilation

Terminal must be opened in the root of the project.

To compile and check the obliatory part, a main function must be created, that calls the get_next_line function once or more and tells the function from which file descriptor it must work with.

To make things simpler, some instructions are provided below to enable people without programming knowledge to work with the function:

- Create a main.c file containing the following code:
```C
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main()
{
	int	fd;
	char *str1;

	fd = open("test.txt", O_RDONLY);
	while (1)
	{
		str1 = get_next_line(fd);
		if (str1 == NULL)
			break ;
		printf("%s", str1);
		free(str1);
	}
	close(fd);
	return (0);
}
```
- Now, create a `test.txt`, that contains at least one line. For simplification purposes, an example is attached:
```txt
Line 1
Line 2
Line 3
This is the last line (Line 4)
```
- Compile the files using: 
```bash
cc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c
```

## 📚 Project overview
| File | Description |
| :--- | :--- |
| `get_next_line.c` | Handles main function, reads the file descriptor, selects the lines to be returned and storage of previously returned lines not to repeat itself when recursively calling the get_next_line function. |
| `get_next_line_utils.c` | Handles intermidiate functions used in get_next_line.c, including finding the length of a string or join them, as well as returning pointers to certain parts of a string. |
| `get_next_line.h` | Library where all non-static functions are defined |

## 🗂️ Resources used

- IA Usage: Used IA to get further information on how to store variables from a previous function call, understand correctly what a static variable entails, improve documentation and get tests to try and break the functions.