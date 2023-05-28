#include <stdio.h>

void main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0 && number % 3 == 0) {
        printf("Hello World\n");
    }
    else if (number % 2 == 0) {
        printf("Hello\n");
    }
    else if (number % 3 == 0) {
        printf("World\n");
    }
    else {
        printf("Number is not divisible by 2 or 3\n");
    }

}

Output:

Enter a number: 4
Hello

Enter a number: 9
World

Enter a number: 12
Hello World

Enter a number: 7
Number is not divisible by 2 or 3
