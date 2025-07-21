# C++ Module 02: Operator Overloading and Canonical Form

This repository contains the solutions for Module 02 of the C++ curriculum. This module dives deep into more advanced C++ features, focusing on operator overloading and the Orthodox Canonical Class Form (OCCF), which are essential for creating robust and intuitive classes.

---

## Core Concepts Covered

This module explores the following key topics:

-   **Orthodox Canonical Class Form (OCCF)**: The mandatory structure for robust classes, including a default constructor, copy constructor, copy assignment operator, and destructor.
-   **Ad-hoc Polymorphism**: Overloading operators (`+`, `-`, `*`, `/`, `==`, `<`, `++`, etc.) to allow custom classes to behave like built-in types.
-   **Fixed-Point Arithmetic**: Implementing a custom numerical type to represent non-integer values with fixed precision, as an alternative to floating-point numbers.
-   **Static Members**: Using `static` member functions and variables within a class.
-   **Binary Space Partitioning (BSP)**: Applying a custom class to solve a practical geometry problem.

---

## Exercise Breakdown

### `ex00: My First Class in Orthodox Canonical Form`
-   **Goal**: To introduce the Orthodox Canonical Form by creating a basic `Fixed` class for fixed-point numbers. This exercise establishes the foundation for proper class design, focusing on the four canonical member functions.

### `ex01: Towards a more useful fixed-point number class`
-   **Goal**: To extend the `Fixed` class by adding constructors that convert from integers and floats, and member functions to convert back. It also introduces overloading the insertion (`<<`) operator for easy printing.

### `ex02: Now we’re talking`
-   **Goal**: To implement ad-hoc polymorphism through extensive operator overloading. The `Fixed` class is enhanced with comparison, arithmetic, and increment/decrement operators, making it behave like a native number type.

### `ex03: BSP`
-   **Goal**: To apply the newly created `Fixed` class to a practical geometry problem. This involves creating a `Point` class and a function to determine if a point lies inside a triangle using the Binary Space Partitioning concept.

---

## How to Compile and Run

Each exercise is contained in its own directory (`ex00`, `ex01`, etc.) and includes a `Makefile`.

1.  **Navigate to an exercise directory**:
    ```bash
    cd ex00
    ```

2.  **Compile the project**:
    ```bash
    make
    ```

3.  **Run the executable**:
    The executable name is specified in the `Makefile` for each exercise.
    ```bash
    ./a.out
    ```

4.  **Clean up**:
    -   `make clean`: Removes the intermediate object files (`.o`).
    -   `make fclean`: Removes object files and the final executable.
    -   `make re`: Cleans and rebuilds the project.

All projects are compiled using `c++` with the flags `-Wall -Wextra -Werror -std=c++98`.
