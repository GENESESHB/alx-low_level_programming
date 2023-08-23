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
