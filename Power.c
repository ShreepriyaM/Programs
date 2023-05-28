#include <stdio.h>

void main() 
{
    int base, exponent;
    long long result = 1;

    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    while (exponent != 0) {
        result *= base;
        --exponent;
        }

    printf("The result is: %lld\n", result);

}

Output:

Enter the base number: 3
Enter the exponent: 2
The result is: 9
