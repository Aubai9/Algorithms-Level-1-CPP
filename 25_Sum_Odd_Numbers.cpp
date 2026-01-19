#include <iostream>

using namespace std;

enum enOddEven { Odd = 1, Even = 2 };

int readNumber() {
    int n;
    cout << "Enter number (N): " << endl;
    cin >> n;
    return n;
}

int SumOddNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { 
            sum += i;
        }
    }
    return sum;
}

void printResult(int total) {
    cout << "\nSum of odd numbers is: " << total << endl;
}

int main() {
    printResult(SumOddNumbers(readNumber()));
    return 0;
}