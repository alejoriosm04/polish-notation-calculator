<h1 align = "center">Polish Notation Calculator</h1>

An implementation of a polish notation (PN)[^definition] calculator in C++ that does not rely on Standard Libraries.

## Features

- 📥 Checks valid syntax of polish notation (PN) expressions

- 🔍 Analyzes the expressions with a regex process

- 🤔 Output result of PN expression and operational steps for solving it

- 🔁 Calculate endlessly (no need to execute the program each time)

## Motivation

The main aim of this project was to recreate the behavior of linked lists in C++ from scratch.

In other words, not using Standard Libraries of C++.

## Method

###  Flow

1. The user inputs a polish notation (PN) expression.

2. Then it is checked by a simple regular expressions system that:

    - If invalid, asks for a new expression

    - Otherwise, prompts the user: see result and operations?

3. Finally, the user can input a new PN expression.

### Technical details

- Makes use of the **stack** memory model for the operations related to the linked lists. Where the last item in a linked list, is the first out of it (LIFO).

- Applies concepts such as pointers and references in C++.

- Modeled towards object-oriented programming.

## Documentation

**Note:** Please read the instructions and suggestions displayed at the start.

- **Evaluate and calculate** PN expressions:

    \+ * 8 -72.4 4

    / 8 + 6 * 3 2

- **Operators**: addition (`+`), subtraction (`-`), multiplication
    (`*`), division (`/`).

- **Decimal numbers** (dot as decimal separator) and **negative numbers**.

### Caveats

PN expressions have a certain way to be declared algebraically. Please be sure of the syntax to avoid errors in execution.

Be aware that it's possible for the program to answer correctly to some _wrong_ inputs. However, I plan to correct these kind of bugs in future updates.

As a precaution, the program does not break if the input is invalid.

## Install

- Binaries are in pre-release.

<!-- Uncomment when binaries are released
- The project was compiled to be run as an executable file. See [releases](https://github.com/alejoriosm04/polish-notation-calculator/releases).
-->

- Clone the repo:

        git clone https://github.com/alejoriosm04/polish-notation-calculator.git

## Contribute

You are welcome to submit issues or pull requests.

## Authors

[Alejandro Ríos](https://github.com/alejoriosm04) developed the entire program.[^thanks]

## License

Copyright 2022 Alejandro Ríos.

[^definition]: [Wikipedia](https://en.wikipedia.org/wiki/Polish_notation): "A mathematical notation in which operators precede their operands".

[^thanks]: Thanks to [Luis M. Torres-Villegas](https://github.com/LuisForPresident) for revising the README.
