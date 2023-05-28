#include <stdio.h>

void main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 3 == 0) {
        printf("%d is divisible by 3\n", number);
    }
    else {
        printf("%d is not divisible by 3\n", number);
    }

}

Output:

Enter a number: 9
9 is divisible by 3

Enter a number: 14
14 is not divisible by 3
