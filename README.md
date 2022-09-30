<h1 align = "center">Polish Notation Calculator 🖩</h1>

A calculator that checks and reads multiple polish notation expressions to make calculations.

For more details about [Polish Notation](https://en.wikipedia.org/wiki/Polish_notation).


## Features

- 📥 The calculator receives the expression in Polish Notation and verifies it.
- 🔍 Analyze the expressions through a Regular Expression process, taking into account the conditions that a Polish Notation Expression needs to work correctly.
- 🤔 Calculate the Polish Notation Expression, giving all the operations involve and the final result.
- 🔁 The program allows you to calculate as many times as you want without stopping the program.


## How does it work?

The main aim of the project is not to use any Standard Library of C++ related with Nodes and Linked Lists.

This program works with the Nodes and Linked Lists structures from zero, recreating all it is behavior.

First of all, the user enters an expression in Polish Notation that is checked by a simple Regular Expressions system. If the expression is not valid the program continues it is a normal process and asks again for a new expression. On the contrary, it asks the user if it wants to know the answer and the operations.

It makes use of the Stack memory model for the operations with the linked lists. Where the last in the linked lists, is the first out of this. Also, apply concepts in pointers and references in C++ with an Object Oriented Programming Model.

## Documentation

Please read carefully the instructions and recommendations of use that appears at the beginning of the program.

This software is able to answer correctly to some wrong inputs of the user. However, in future updates, we will try to optimize all the possible bugs of the calculator. Read [Contribute](#contribute)

- Evaluate and calculate prefix Polish Notation Expressions:
    > `+ * 8 -72.4 4`

    > `/ 8 + 6 * 3 2`

    - **Operators**: addition (`+`), subtraction (`-`), multiplication
    (`*`), division (`/`).
    - **Decimal numbers** and **negative numbers** with dot as decimal separator.

- Polish Notation Expressions have a specific way to be declared algebraically. Please read and investigate how are these expressions, in order to avoid possible errors in execution.

- At execution time, the program is friendly with the user, allowing the user to enter as many inputs they want without closing the calculator. In the same way, if the input is invalid or wrong, the program does not close or finish.

## Installing
The project was compiled to be used on your local Operative System with an executable file. In [`Release`](), you will, find the respectives executable files.

Also, you have the option of clone this files on your local enviroment and execute through console:

- If you are in UNIX - Debian Distros

    some command here

- If you are in Windows

    some command here

## Contribute

There are many features and bugs that we have not added to the calculator. However, if you want to help us and contribute, make a pull request. These are just some of the many ways you can help to help this project to grow.

## Developers

This Polish Notation Calculator was developed by [Alejandro Ríos](https://github.com/alejoriosm04).

Thanks to [Luis M. Torres-Villegas](https://github.com/LuisForPresident) contributing with the documentation of the project.