// Write a C program to print largest of two numbers using if statement 

#include <stdio.h>

void main() 
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) 
    {
        printf("%d is the largest number\n", num1);
    }
    else if (num2 > num1) {
        printf("%d is the largest number\n", num2);
    }
    else {
        printf("Both numbers are equal\n");
    }

}

Output:

Enter the first number: 5
Enter the second number: 8
8 is the largest number
