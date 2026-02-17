### GDB - GNU project Debugger

This tutotial shows the usage of gdb using cpp codes.

## Part 1: Try the commands in the part1 with the basics1.cc

1. When compiling the code the gdb should be enabled, which says the copiler to execute it line by line and then have a copy of the source code.

For that we should use the below compiler flag:
    flag: -g

example:
```bash
g++ -g -o basics1 basics1.cc
```
2.To run a programme inside of a gdb

```bash
gdb ./basic1
 ```

 3. Then try the follwing commands in gdb

-running the programme: run //same as command name in bash 
                        run arg1 arg2 <infile>

-breakpoint: break <function name>
             break <line number>

-run the programme and stop at the next line: next / n

-print out the line of codes: list

-print ou a value that stored in some variable: print <variable> /p 
also can print the commands
    example: p j + k
             p ((j * 3) + k * 2) - 2

-to quit the gdb: quit / q

## Part 2: Try the comm