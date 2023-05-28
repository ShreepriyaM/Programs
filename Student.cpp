// Write a C++ program to read any 3 student fields and create an array of 5 students objects

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    char grade;

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Grade: " << grade << endl;
        cout << endl;
    }
};

int main() {
    Student students[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i + 1 << endl;

        cout << "Name: ";
        cin >> students[i].name;

        cout << "Roll Number: ";
        cin >> students[i].rollNumber;

        cout << "Grade: ";
        cin >> students[i].grade;

        cout << endl;
    }

    cout << "Student Details:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << endl;
        students[i].displayInfo();
    }

    return 0;
}

Output:

Enter details for student 1
Name: priya
Roll Number: 11
Grade: 8

Enter details for student 2
Name: raksha
Roll Number: 12
Grade: 9

Enter details for student 3
Name: namratha
Roll Number: 13
Grade: 7

Enter details for student 4
Name: pooja
Roll Number: 23
Grade: 8

Enter details for student 5
Name: kavya
Roll Number: 34
Grade: 7

Student Details:
Student 1
Name: priya
Roll Number: 11
Grade: 8

Student 2
Name: raksha
Roll Number: 12
Grade: 9

Student 3
Name: namratha
Roll Number: 13
Grade: 7

Student 4
Name: pooja
Roll Number: 23
Grade: 8

Student 5
Name: kavya
Roll Number: 34
Grade: 7
