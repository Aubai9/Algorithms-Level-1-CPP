#include <iostream>

using namespace std;

int readNumber() {
    int n;
    cout << "Enter number (N): " << endl;
    cin >> n;
    return n;
}

int SumEvenNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { 
            sum += i;
        }
    }
    return sum;
}

void printResult(int total) {
    cout << "\nSum of even numbers is: " << total << endl;
}

int main() {
    printResult(SumEvenNumbers(readNumber()));
    return 0;
}