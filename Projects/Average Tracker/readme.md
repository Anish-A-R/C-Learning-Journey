# Average Score Tracker in C

## Project Overview
This project is a simple C program that calculates the average score of a group of students. It asks the user to enter the number of students, then reads each student's score, computes the average, and displays the result.

The program is a good beginner exercise because it uses basic concepts such as loops, arrays, input/output, and arithmetic operations.

---

## Features
The program includes the following features:

1. **Student count input**
   The user enters how many students' scores will be entered.

2. **Score input for each student**
   The program reads one score at a time using a loop.

3. **Average calculation**
   It adds all the scores and divides by the number of students.

4. **Repeat option**
   After showing the result, the user can choose whether to run the program again.

5. **Input validation for student count**
   If the user enters a number less than or equal to zero, the program shows a message and asks again.

---

## How the Program Works
The program follows these steps:

1. It prints a welcome message.
2. It asks the user how many students are there.
3. If the number is invalid, it prints a warning message.
4. It stores all scores in an array.
5. It calculates the total using a loop.
6. It computes the average.
7. It displays the average.
8. It asks if the user wants to continue.

---

## How the Average Is Calculated
The program uses floating-point values so the average can be shown correctly with decimals.

The code stores the scores in a float array and calculates the average using:

```c
avg = sum / num;
```

Since `sum` and `avg` are declared as float values, the output can be shown with proper decimal precision.

The result is printed using:

```c
printf("The average of the students is:  %.2f\n", avg);
```

This displays the average with two decimal places.

---

## Example Flow
A sample run might look like this:

1. The user enters `3` students.
2. The program asks for three scores.
3. The user enters `80`, `90`, and `70`.
4. The program calculates:
   - total = 240
   - average = 80

---

## Sample Output
```text
Average Score Tracker
Enter how much people are there: 3
Enter the score of 1 student: 80
Enter the score of 2 student: 90
Enter the score of 3 student: 70
The average of the students is:  80.00
Do you want to continue(1 for yes and 0 for no): 0
Thanks For Using the Average Tracker.
```

---

## How to Run the Program
To run this program:

1. Save the file with a `.c` extension.
2. Open a terminal in the same folder.
3. Compile it using:

```bash
gcc file_name.c -o average_tracker
```

4. Run the program:

```bash
./average_tracker
```

---

## Learning Points
This project helps beginners practice:

- using `printf()` and `scanf()`
- working with arrays
- using loops to repeat tasks
- calculating totals and averages
- using conditional statements for validation

---

## Conclusion
The Average Score Tracker is a simple and useful project for learning how to handle user input, store data in arrays, and perform calculations in C.
