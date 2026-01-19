#include <iostream>

using namespace std;

int readNumber() {
    int number;
    cout << "Enter the number: " << endl;
    cin >> number;
    return number;
}

int readPower() {
    int power;
    cout << "Enter the power: " << endl;
    cin >> power;
    return power;
}

int PowerOfM(int number, int power) {
    if (power == 0) {
        return 1;
    }
    
    int p = 1;
    for (int i = 1; i <= power; i++) {
        p *= number;
    }
    return p;
}

void printResult(int result) {
    cout << "\nResult: " << result << endl;
}

int main() {
    printResult(PowerOfM(readNumber(), readPower()));
    return 0;
}