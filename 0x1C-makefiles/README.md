![make_file](https://blogshakti.org.in/wp-content/uploads/2020/09/make1.png)
# 0x1C. C - Makefiles 👑
# RESOURCES :RC:

[makefile](https://makefiletutorial.com/)
[istalling make in sandbox](https://www.geeksforgeeks.org/how-to-install-make-on-ubuntu/)
[make official documantation](https://www.gnu.org/software/make/manual/html_node/)

# tasks 🔋
# 0️⃣

```make
all:
    gcc main.c school.c -o school
```

- `all:`: This line defines a target named "all". Targets are goals you want to achieve when using the Makefile. Here, the goal is to create an executable named "school".

- `    gcc main.c school.c -o school`: This line is the recipe associated with the "all" target. The recipe contains the commands that will be executed when you run `make all`.

  - `gcc`: This is the command for the GNU Compiler Collection, which is used to compile C code.
  
  - `main.c school.c`: These are the source code files that will be compiled. They are specified after the `gcc` command.
  
  - `-o school`: This flag tells the compiler to name the output file "school" (the compiled executable). The `-o` flag is followed by the name of the output file.

So, when you run the command `make all` or simply `make`, the Makefile will execute the recipe associated with the "all" target, which uses the `gcc` compiler to compile `main.c` and `school.c` into an executable named "school".

# 1️⃣


```make
CC = gcc
SRC = main.c school.c

all: $(SRC)
        $(CC) $(SRC) -o school;
```

- `CC = gcc`: This line sets the variable `CC` to the value "gcc". Variables in Makefiles are used to store values that can be used later in the Makefile, making it easy to change values in one place.

- `SRC = main.c school.c`: This line sets the variable `SRC` to the list of source code files "main.c" and "school.c". The variables can be referenced later to avoid repeating file names.

- `all: $(SRC)`: This line defines a target named "all". This target will be built when you run the `make all` command. The dependency `$(SRC)` indicates that the target "all" depends on the files listed in the `SRC` variable, which are "main.c" and "school.c". This means that before building the "all" target, Make will ensure that "main.c" and "school.c" are up to date.

- `$(CC) $(SRC) -o school;`: This line is the recipe associated with the "all" target. The recipe contains the commands that will be executed when you run `make all`. It consists of the following parts:
  
  - `$(CC)`: This is a variable reference that expands to the value of the `CC` variable, which is "gcc". So, it represents the compiler command.
  
  - `$(SRC)`: This variable reference expands to the list of source code files, "main.c" and "school.c".
  
  - `-o school`: This part of the command specifies that the output executable should be named "school".
  
  - `;`: The semicolon indicates the end of the command.

In summary, this Makefile compiles the source code files "main.c" and "school.c" using the "gcc" compiler. It creates an executable named "school" using the `all` target as the entry point. The variable references make the Makefile flexible and reusable for different projects.


# 2️⃣

 let's go through the code step by step:

```make
CC = gcc
SRC = main.c school.c
OBJ = $(SRC:.c=.o) 
NAME = school

all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME)
```

- `CC = gcc`: This line sets the variable `CC` to the compiler command "gcc".

- `SRC = main.c school.c`: This line sets the variable `SRC` to a list of source code files "main.c" and "school.c".

- `OBJ = $(SRC:.c=.o)`: This line sets the variable `OBJ` to a list of object files corresponding to the source code files. It uses substitution to replace `.c` with `.o` in each source code file. For example, "main.c" becomes "main.o" and "school.c" becomes "school.o".

- `NAME = school`: This line sets the variable `NAME` to the name of the executable, which is "school".

- `all: $(OBJ)`: This line defines a target called "all" that depends on the object files listed in the `OBJ` variable. It means that before building the "all" target, Make will ensure that the object files are up to date.

- `$(CC) $(OBJ) -o $(NAME)`: This line is the recipe associated with the "all" target. It uses the `$(CC)` variable to represent the compiler command, `$(OBJ)` to represent the object files, and `$(NAME)` to represent the executable name. This command compiles and links the object files to create the executable named "school".

This Makefile is more advanced as it uses object files to separate the compilation and linking steps. This can be helpful in larger projects to speed up the build process by only recompiling the modified source files. It's a common practice in software development to compile each source file into an object file and then link the object files together to create the final executable.

# 4️⃣
This Makefile includes additional rules for cleaning, object file cleanup, and recompilation. Let's break down the code line by line:

```make
CC = gcc
SRC = main.c school.c
OBJ = $(SRC:.c=.o) 
NAME = school
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic
```

- `CC = gcc`: Sets the compiler to be used as "gcc".
- `SRC = main.c school.c`: Lists the source code files as "main.c" and "school.c".
- `OBJ = $(SRC:.c=.o)`: Generates a list of object files by replacing `.c` with `.o` in each source file.
- `NAME = school`: Sets the executable name to "school".
- `RM = rm -f`: Defines the `rm -f` command to be used for cleaning.
- `CFLAGS = -Wall -Werror -Wextra -pedantic`: Sets compiler flags for additional warnings and strictness.

```make
all: $(OBJ)
        $(CC) $(CFLAGS) $(OBJ) -o $(NAME)
```

- `all`: The default target that builds the executable. It depends on the object files.
- `$(CC) $(CFLAGS) $(OBJ) -o $(NAME)`: Compiles and links the object files using the specified compiler flags and generates the "school" executable.

```make
clean:
        $(RM) *~ $(NAME)
```

- `clean`: A rule for removing temporary files and the executable.
- `$(RM) *~ $(NAME)`: Removes backup files (`*~`) and the executable (`$(NAME)`).

```make
oclean:
        $(RM) $(OBJ)
```

- `oclean`: A rule for removing object files.
- `$(RM) $(OBJ)`: Removes object files (`$(OBJ)`).

```make
fclean: clean oclean
```

- `fclean`: A rule that combines both cleaning rules (`clean` and `oclean`) to remove all temporary files and object files.

```make
re: fclean all
```

- `re`: A rule that combines the `fclean` and `all` rules to perform a full clean and then recompile.

In summary, this Makefile not only compiles and links the source code files but also provides convenient rules for cleaning up temporary files, object files, and even performing a full clean and recompilation. It's a more advanced Makefile setup that helps manage different aspects of the development process.

# 5️⃣
 the code step by step, and then I'll provide an example of how to use the `island_perimeter` function.

```python
#!/usr/bin/python3
"""Defines an island perimeter measuring function."""
```

- This line is a shebang line (`#!/usr/bin/python3`), which specifies the interpreter to be used to run the script. The following comment describes that the script defines a function for measuring the perimeter of an island.

```python
def island_perimeter(grid):
    """Return the perimeter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of lists of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
```

- This is the function definition for `island_perimeter`. It takes one argument `grid`, which is expected to be a list of lists of integers representing an island where water is represented by 0 and land is represented by 1.

```python
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0
```

- These lines calculate the `width` and `height` of the grid (number of columns and rows respectively). They also initialize two variables: `edges` to keep track of adjacent land cells, and `size` to keep track of the total number of land cells.

```python
    for i in range(height):  # Loop through each row
        for j in range(width):  # Loop through each column
            if grid[i][j] == 1:  # If it's a land cell
                size += 1
                if j > 0 and grid[i][j - 1] == 1:  # Check left neighbor
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:  # Check upper neighbor
                    edges += 1
```

- These nested loops iterate through each cell in the grid. If the cell represents land (1), the `size` counter is incremented. The code then checks neighboring cells to the left and above the current cell. If those neighboring cells are also land, it means they share an edge, so the `edges` counter is incremented.

```python
    return size * 4 - edges * 2
```

- Finally, the function calculates and returns the perimeter of the island. The perimeter is calculated using the formula: `perimeter = total_cells * 4 - shared_edges * 2`. This formula leverages the observation that each land cell contributes 4 sides to the perimeter, but when two adjacent land cells share an edge, two sides are subtracted.

Now, let's look at how you can use this function:

```python
# Example usage
grid = [
    [0, 1, 0, 0],
    [1, 1, 1, 0],
    [0, 1, 0, 0],
    [1, 1, 0, 0]
]

perimeter = island_perimeter(grid)
print("Island perimeter:", perimeter)
```

In this example, the `island_perimeter` function is used to calculate the perimeter of an island represented by the `grid`. The output should be the calculated perimeter of the island.

The output of the example code provided earlier would be:

```
Island perimeter: 16
```

This output indicates that the calculated perimeter of the island represented by the given grid is 16 units. The function has counted the perimeter by considering the edges between land cells and accounting for shared edges between adjacent land cells.
