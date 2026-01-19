#include <iostream>

using namespace std;

int readPositiveNumber(string msg) {
    int n;
    do {
        cout << msg << endl;
        cin >> n;
    } while (n < 0);
    return n;
}

int Factorial(int n) {
    int f = 1;
    for (int counter = n; counter >= 1; counter--) {
        f *= counter;
    }
    return f;
}

void printResult(int result) {
    cout << "\nFactorial is: " << result << endl;
}

int main() {
    printResult(Factorial(readPositiveNumber("Enter a positive number N: ")));
    return 0;
}