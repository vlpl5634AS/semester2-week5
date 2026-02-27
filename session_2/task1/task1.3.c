//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.3
 * You have to decide which type of loop (for, while, do...while) to use.
 * Write a C program to read a series of integers from the user and sum them
 * until a 0 (zero) is entered. Print the sum at the end.
 */
    int sum = 0;
    int number;
    // complete the rest of the code here
    do {
        printf("Enter an integer (0 to stop): ");
        scanf("%d", &number);
        sum += number; // add the entered number to the sum
    } while (number != 0); // continue until the user enters 0  
    printf("The sum of the entered integers is: %d\n", sum);

    return 0;
}