# C Programming Practice

This repository contains C programs written during practice sessions.

## Programs

### Pass/Fail Student Checker
* **File:** `pass_fail_checker.c`
* **Description:** Takes student marks (0–100) as input and determines whether the student passed or failed.
  * Marks `> 30`: **PASS**
  * Marks `<= 30`: **FAIL**
  * Marks outside `0–100`: **Invalid Input**

### Student Grade Checker
* **File:** `student_grade_checker.c`
* **Description:** Takes student marks (0–100) as input and assigns grades (A+, A, B, C) based on the score.
* Marks `< 30`: **C**
  * Marks `30 to 69`: **B**
  * Marks `70 to 89`: **A**
  * Marks `90 to 100`: **A+**

  ### Print Numbers 0 to N
* **File:** 'while_loop_0_to_n.c'
* **Description:** Takes a number `n` from the user and prints all numbers from `0` to `n` using a while loop.

### Multiplication Table Generator
* **File:** `multiplication_table.c`
* **Description:** Takes a number as input from the user and prints its multiplication table from 1 to 10 using a `for` loop.

### Function Basics (Hello & Goodbye)
* **File:** `hello_goodbye_functions.c`
* **Description:** Demonstrates function declarations, function definitions, and function calls in C by printing "Hello!" and "Goodbye!".

### Country Greeting Functions
* **File:** `greeting_functions.c`
* **Description:** Uses functions to print "Namaste" if the user enters 'i' for Indian, and "Bonjour" if the user enters 'f' for French.

### Area Calculator using Functions
* **File:** `area_functions.c`
* **Description:** Demonstrates function parameters and return values by calculating the area of a square, circle, and rectangle in C.

### Factorial using Recursion
* **File:** `factorial_recursion.c`
* **Description:** Calculates the factorial of a given number $n$ using recursive function calls in C.

### Student Percentage Calculator
* **File:** `student_percentage.c`
* **Description:** Calculates the average percentage of a student based on marks in Science, Math, and Sanskrit using a custom function.

### Fibonacci Sequence using Recursion
* **File:** `fibonacci_recursion.c`
* **Description:** Calculates the $n^{\text{th}}$ term of the Fibonacci sequence using recursive function calls based on the relation $\text{fib}(n) = \text{fib}(n-1) + \text{fib}(n-2)$.

## How to Run

1. Open your terminal or VS Code Terminal.
2. Compile any C program using `gcc`:
   ```bash
   gcc <file_name>.c -o output