# Monty Interpreter

Monty 0.98 is a scripting language that relies on a unique stack with specific instructions to manipulate it. This project aims to create an interpreter for Monty ByteCodes files.

## Usage

To use the Monty Interpreter, follow these steps:

1. Clone the repository:
   ```sh
   git clone https://github.com/your-username/monty-interpreter.git
   cd monty-interpreter
## Compiling and Running

### Compile the Code

Use the following command to compile the Monty interpreter code:

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

Files
The project consists of the following files:

monty.h: Header file containing function prototypes and necessary includes.
main.c: Main entry point of the interpreter. Handles file opening, line processing, and opcode execution.
stack_ops.c: Contains functions for stack operations like push, pop, swap, etc.
math_ops.c: Contains functions for mathematical operations like add, sub, mul, etc.
cha
r_ops.c: Contains functions for character-related operations like pchar, pstr.
rotation_ops.c: Contains functions for stack rotation operations like rotl and rotr.
format_ops.c: Contains functions for setting stack format modes like stack and queue.
Implemented Opcodes
Her
e are examples and descriptions of some implemented opcodes in the Monty Interpreter:

push: Pushes a value onto the stack.


pu
sh 42
pop: Removes the top element from the stack.


pop
pal
l: Prints all elements in the stack.


push 10
push 20
pal
l
pint: Prints the value at the top of the stack.


push 5
pint
swa
p: Swaps the top two elements of the stack.


push 1
push 2
swap
add: Adds the top two elements of the stack.


push 3
pus
h 4
add
nop: No operation (does nothing).

wasm
nop
sub
: Subtracts the top element from the second top element of the stack.


push 10
push 5
sub
div
: Divides the second top element by the top element of the stack.


push 20
push 4
div
mul: Multiplies the top two elements of the stack.


p
ush 6
push 7
mul
mod: Computes the remainder of the division of the second top element by the top element of the sta
ck.


push 15
push 4
mod

pchar: Prints the character corresponding to the ascii value at the top of the stack.


push 65
pchar
pstr: Prints the string starting at the top of the stack.


push 72
pus
h 101
push 108
push 108
push 111
push 0
pstr
rotl: Rotates the stack to the top.


p
ush 1
push 2
push 3
rotl
rotr: Rotates the stack to the bottom.


push 4
push 5
push 6
rotr
stack: Sets the format to stack mode (LIFO).

stack
queue: Sets the format to queue mode (FIFO).

queue
Contributing
Contributions are welcome! If you'd like to contribute to the Monty Interpreter, feel free to fork this repository and submit a pull request with your changes.

License
This project is licensed under the MIT License. See the LICENSE file for details.

Contact
For any inquiries or suggestions, feel free to reach out to us at your-email@example.com.

Happy coding! :rocket: