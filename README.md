# Monty 0.98

Monty 0.98 is a scripting language that is first compiled into Monty byte
code, similar to Python. Monty utilizes a uniques stack and performs stack
manipulation through specific instructions. The goal of our project, 0x19.
C - Stacks, Queues - LIFO, FIFO, is to create an interpreter for Monty
ByteCodes files.

### Monty ByteCode files

Files that contain Monty codes, usually have the .m extension, while most
of the industry uses this standard it is not required specification of
the language. Monty bytecode files have no more than one instruction per
line and may contain any number of spaces before or after the opcode and its
argument. They may also contain blank lines (empty or compromised of spaces
only) and any additianal text after the opcode or its required  argument is
not taken into account.

### Compilation & Execution

The program will be compiled with the following:
> gcc -Wall -Werror -Wextra -pedantic * .c -o monty
To run the program:
> ./monty bytecode_file
### Available Operations

-push - pushes an element to the stack.
-pall - prints values on the stack starting from the top.
-pint - prints value at the top of the stack.
-pop - removes the top element of the stack.
-swap - swaps the top two elements.
-add - sume the top two elements on the stack, result is stored in the
second node and the first node is removed.
-nop - does not do anything.

Project completed by Rob Hollis and Kaylene Kilbourn
