// Write a C++ program to read two numbers from standard input and perform sum of two numbers

#include <iostream>

using namespace std;

int main() {
    float num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    float sum = num1 + num2;

    cout << "Sum: " << sum << endl;

    return 0;
}
