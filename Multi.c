#include <stdio.h>

void main() 
{
    float num1, num2, product;

    printf("Enter the first float number: ");
    scanf("%f", &num1);

    printf("Enter the second float number: ");
    scanf("%f", &num2);

    product = num1 * num2;

    printf("The product of %.2f and %.2f is %.2f\n", num1, num2, product);
}

Output:

Enter the first float number: 2.3
Enter the second float number: 4.2
The product of 2.30 and 4.20 is 9.66
