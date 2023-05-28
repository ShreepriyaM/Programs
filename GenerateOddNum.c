// Write a C program to generate odd numbers without using for loop 

#include <stdio.h>

void main() 
{
    int count, num = 1;

    printf("Enter the count of odd numbers to generate: ");
    scanf("%d", &count);

    while (count > 0) {
        printf("%d\n", num);
        num += 2;
        count--;
    }

}

Output:

Enter the count of odd numbers to generate: 10
1
3
5
7
9
11
13
15
17
19
