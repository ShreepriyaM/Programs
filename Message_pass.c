// Write a C program to generate numbers divisible by 2 and divisible by 3, if the number is divisible by both 2 and 3 print the message pass

#include <stdio.h>

void main() 
{
    int count, num = 1;

    printf("Enter the count of numbers to generate: ");
    scanf("%d", &count);

    while (count > 0) {
        if (num % 2 == 0 && num % 3 == 0) {
            printf("%d (pass)\n", num);
        }
        else if (num % 2 == 0) {
            printf("%d (divisible by 2)\n", num);
        }
        else if (num % 3 == 0) {
            printf("%d (divisible by 3)\n", num);
        }

        num++;
        count--;
    }

}

Output:

Enter the count of numbers to generate: 10
2 (divisible by 2)
3 (divisible by 3)
4 (divisible by 2)
6 (pass)
8 (divisible by 2)
9 (divisible by 3)
10 (divisible by 2)
