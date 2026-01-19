#include <iostream>

using namespace std;

float readNumber() {
    float number;
    cout << "Enter the number: " << endl;
    cin >> number;
    return number;
}

float getHalfNumber(float number) {
    return number / 2;
}

void printHalfNumber(float number) {
    string result = "Half number of " + to_string((int)number) + " is " + to_string(getHalfNumber(number));
    cout << result << endl;
    // أو بالطريقة المباشرة كما كتبتها أنت:
    // cout << "Half number of " << number << " is " << getHalfNumber(number) << endl;
}

int main() {
    printHalfNumber(readNumber());
    return 0;
}