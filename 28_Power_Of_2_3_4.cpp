#include <iostream>

using namespace std;

int readNumber() {
    int number;
    cout << "Enter the number: " << endl;
    cin >> number;
    return number;
}

void PrintPowerNumber2_3_4(int number) {
    cout << "Number^2 = " << number * number << endl;
    cout << "Number^3 = " << number * number * number << endl;
    cout << "Number^4 = " << number * number * number * number << endl;
}

int main() {
    PrintPowerNumber2_3_4(readNumber());
    return 0;
}