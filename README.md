# C Matrix Calculator

A menu-driven matrix calculator developed in **C**, allowing users to perform basic matrix operations using two-dimensional arrays and functions.

## Features

The program supports the following operations:

1. **Matrix Addition** – Adds two matrices of the same dimensions.
2. **Matrix Subtraction** – Subtracts Matrix B from Matrix A.
3. **Transpose of Matrix A** – Converts rows into columns.
4. **Transpose of Matrix B** – Converts rows into columns.
5. **Input Validation** – Checks matrix dimensions and menu selections.
6. **Interactive Menu** – Allows users to perform multiple operations until they choose to exit.

## Requirements

- C compiler (GCC recommended)
- Command-line terminal or an IDE such as Visual Studio Code

## How to Compile and Run

Clone the repository:

```bash
git clone https://github.com/hemamaliniav/C-Matrix-Calculator.git
```

Navigate into the project directory:

```bash
cd C-Matrix-Calculator
```

Compile the program:

```bash
gcc main.c -o matrix_calculator
```

Run the program:

**Windows:**
```bash
matrix_calculator.exe
```

**macOS / Linux:**
```bash
./matrix_calculator
```

## Matrix Operations

For example, given:

**Matrix A**

```text
1  2
3  4
```

**Matrix B**

```text
5  6
7  8
```

Addition:

```text
6  8
10 12
```

Subtraction (A - B):

```text
-4 -4
-4 -4
```

Transpose of A:

```text
1  3
2  4
```

Transpose of B:

```text
5  7
6  8
```

## Concepts Practised

- Two-dimensional arrays
- Nested loops
- Functions and function calls
- Passing arrays to functions
- Matrix operations
- Conditional statements (`switch`)
- Input validation (`do-while`)
- Menu-driven programming

## Testing

The program was tested with:

- Square matrices (2 × 2 and 3 × 3)
- Rectangular matrices (2 × 3)
- All four matrix operations
- Invalid menu selections
- Invalid matrix dimensions
- Program termination using the exit option

## Future Improvements

- Support for matrix multiplication
- Support for larger matrices
- Improved input validation
- More matrix operations

---

**Language:** C  
**Compiler:** GCC

*Developed as a C programming practice project.*
