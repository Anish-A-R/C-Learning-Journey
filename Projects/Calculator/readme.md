# Basic Calculator in C

## Project Overview
This project is a simple command-line calculator written in the C programming language. It allows the user to perform four basic arithmetic operations:

- Addition
- Subtraction
- Multiplication
- Division

The program is beginner-friendly and is a great example of how to use functions, loops, conditional statements, and user input in C.

---

## Features
The calculator includes the following features:

1. **Menu-based interface**  
   The user can choose an operation from a list.

2. **Input for two numbers**  
   The program asks the user to enter two values before performing the calculation.

3. **Basic arithmetic operations**  
   It supports:
   - `a + b`
   - `a - b`
   - `a * b`
   - `a / b`

4. **Division by zero protection**  
   If the user tries to divide by zero, the program displays a warning message instead of crashing.

5. **Repeat option**  
   After each calculation, the user can choose whether to continue using the calculator.

---

## How the Program Works
The program is divided into small parts:

### 1. Arithmetic Functions
The code defines separate functions for each operation:

- `add(a, b)` → returns the sum
- `sub(a, b)` → returns the difference
- `mul(a, b)` → returns the product
- `div(a, b)` → returns the quotient

These functions make the code easier to read and reuse.

### 2. Main Logic
Inside `main()`, the program:

- prints a welcome message,
- shows the operation menu,
- takes the user's choice,
- reads two numbers,
- performs the selected calculation,
- asks if the user wants to continue.

### 3. Looping Structure
A `while` loop keeps the calculator running until the user chooses to stop.

---

## Example Flow
A typical run of the program may look like this:

1. The program displays the menu.
2. The user enters `1` for addition.
3. The user enters `10` and `5`.
4. The program prints:
   - `The addition of 10.000000 and 5.000000 is: 15.000000`
5. The program asks if the user wants to continue.

---

## Sample Output
```text
This is my first project in C language
Nothing to flex just a simple calculator
This calculator can be used to perform basic arithmetic operations like addition, subtraction, multiplication and division
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice: 1
Enter the first number: 10
Enter the second number: 5
The addition of 10.000000 and 5.000000 is: 15.000000
Do you want to continue? (1 for yes / 0 for no): 0
THANKS FOR USING THE CALCULATOR
```

---

## How to Run the Program
To run this calculator on a C compiler, follow these steps:

1. Save the source code as a `.c` file.
2. Open a terminal in the project folder.
3. Compile the program using:

```bash
gcc file_name.c -o calculator
```

4. Run the program using:

```bash
./calculator
```

---

## Learning Points
This project helps beginners understand:

- how to use `printf()` and `scanf()`
- how to create custom functions
- how to use `switch` statements
- how to use `while` loops
- how to handle invalid input and special cases like division by zero

---

## Conclusion
The Basic Calculator project is a simple but effective way to practice C programming. It teaches the fundamentals of input, output, decision-making, repetition, and function usage in a practical way.
