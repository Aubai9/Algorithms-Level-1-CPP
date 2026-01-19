#include <iostream>

using namespace std;

int ReadAge() {
    int age;
    cout << "Enter your age (between 18 and 45): " << endl;
    cin >> age;
    return age;
}

int ValidateAgeBetween(int from, int to) {
    int age = ReadAge();
    
    while (age < from || age > to) {
        cout << "Invalid Age! Please try again." << endl;
        age = ReadAge();
    }
    return age;
}

void printResult(int age) {
    cout << "\nYour valid age is: " << age << endl;
}

int main() {
    printResult(ValidateAgeBetween(18, 45));
    return 0;
}