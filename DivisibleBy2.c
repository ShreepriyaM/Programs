// Write a C program to check if a number divisible 2 or not

#include <stdio.h>

void main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is divisible by 2\n", number);
    }
    else {
        printf("%d is not divisible by 2\n", number);
    }

}

Output:

Enter a number: 12
12 is divisible by 2

Enter a number: 9
9 is not divisible by 2
