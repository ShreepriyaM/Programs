#include <stdio.h>

void main() {
    float test1, test2, test3;
    float sum, average;

    printf("Enter the marks for Test 1: ");
    scanf("%f", &test1);

    printf("Enter the marks for Test 2: ");
    scanf("%f", &test2);

    printf("Enter the marks for Test 3: ");
    scanf("%f", &test3);

    sum = test1 + test2 + test3;
    average = sum / 3;

    printf("Sum of marks: %.2f\n", sum);
    printf("Average marks: %.2f\n", average);

}

Output:

Enter the marks for Test 1: 68
Enter the marks for Test 2: 75
Enter the marks for Test 3: 49
Sum of marks: 192.00
Average marks: 64.00
