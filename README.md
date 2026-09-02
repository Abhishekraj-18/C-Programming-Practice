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

## How to Run

1. Open terminal and navigate to the directory.
2. Compile using GCC:
   ```bash
   gcc pass_fail_checker.c -o output