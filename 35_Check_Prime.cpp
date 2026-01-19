#include <iostream>
#include <cmath>

using namespace std;

enum enPrimeOrNot { Prime = 1, NotPrime = 2 };

int readPositiveNumber(string msg) {
    int number;
    do {
        cout << msg << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

enPrimeOrNot checkPrime(int number) {
    if (number == 1) return enPrimeOrNot::NotPrime;  

    int m = round(number / 2);
    for (int i = 2; i <= m; i++) {
        if (number % i == 0)
            return enPrimeOrNot::NotPrime;
    }
    return enPrimeOrNot::Prime;
}

void printNumberType(int number) {
    switch (checkPrime(number)) {
    case enPrimeOrNot::Prime:
        cout << "\nThe number " << number << " is Prime." << endl;
        break;
    case enPrimeOrNot::NotPrime:
        cout << "\nThe number " << number << " is Not Prime." << endl;
        break;
    }
}

int main() {
    printNumberType(readPositiveNumber("Please enter a positive number:"));
    return 0;
}