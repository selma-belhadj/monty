# monty
`Monty` is a scripting language that is first compiled into monty byte codes (Just like python). It relies on a unique stack, with specific instructions to manipulate it. **`monty`** is an interpreter built specially for the Monty Bytecodes files.

## More About the Monty language
This is a language that contains specific instructions to manipulate data information (stacks or queues), where each instruction (*called opcode*) is sended per line. Files which contains Monty byte codes usually have the `.m` extension.

## Environment
* Language: C
* OS: Ubuntu 14.04 LTS
* Compiler: gcc 4.8.4
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Getting Started
- clone the repository
`git clone https://github.com/selma-belhadj/monty.git`
- navigate to the repository
`cd monty`
## Usage
To compile all files:

```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
$
```

The **synopsis** of the interpreter is the following:

```bash
$ ./monty [filename]
$
```

To run the interpreter:

```bash
$ ./monty file.m
2
1
0
0
3
2
1
$
```
## Features
### Opcodes
`monty` executes the following opcodes:

| Opcode | Description |
| -------- | ----------- |
| `push` | Pushes an element to the stack |
| `pall` | Prints all the values on the stack |
| `pint` | Prints the value at the top of the stack |
| `pop` | Removes the top element of the stack |
| `swap` | Swaps the top two elements of the stack |
| `queue` | Sets the format of the data to a queue (FIFO) |
| `stack` | Sets the format of the data to a stack (LIFO) |
| `nop` | Doesn't do anything |
| `add` | Adds the top two elements of the stack |
| `sub` | Subtracts the top element of the stack from the second top element of the stack |
| `mul` | Multiplies the second top element of the stack with the top element of the stack |
| `div` | Divides the second top element of the stack by the top element of the stack |
| `mod` | Computes the rest of the division of the second top element of the stack by the top element of the stack |
| `pchar` | Prints the char at the top of the stack |
| `pstr` | Prints the string starting at the top of the stack |
| `rotl` | Rotates the stack to the top |
| `rotr` | Rotates the stack to the bottom |

Comments, indicated with `#`, are not executed by the interpreter.

When a **nonextistent opcode** is passed, the interpreter prints an error message and stops:

```bash
$ cat errorfile.m
push 1
pint
pcx
$ ./monty errorfile.m
1
L3: unknown instruction pcx
```

## Authors
👤 **Selma Belhadj**

- GitHub: [@selma-belhadj](https://github.com/selma-belhadj)
- Twitter: [@Bel_Selma16](https://twitter.com/selma_bel_hadj)
- LinkedIn: [@selma-belhadj](https://www.linkedin.com/in/selma-belhadj/)

## 🤝 Contributing

Contributions, issues, and feature requests are welcome!

Feel free to check the [issues page](https://github.com/selma-belhadj/monty/issues).

## Show your support

Give a ⭐️ if you like this project!