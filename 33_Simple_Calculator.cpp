#include <iostream>

using namespace std;

enum enOperationType { Add = '+', Sub = '-', Mul = '*', Div = '/' };

float readNumber(string msg) {
    float number = 0;
    cout << msg << endl;
    cin >> number;
    return number;
}

enOperationType readOpType() {
    char op;
    cout << "Enter operation type (+, -, *, /): " << endl;
    cin >> op;
    return (enOperationType)op;
}

float calculate(float num1, float num2, enOperationType opType) {
    switch (opType) {
    case enOperationType::Add:
        return num1 + num2;
    case enOperationType::Sub:
        return num1 - num2;
    case enOperationType::Mul:
        return num1 * num2;
    case enOperationType::Div:
        return num1 / num2;
    default:
        return num1 + num2;
    }
}

int main() {
    float Number1 = readNumber("Enter first number:");
    float Number2 = readNumber("Enter second number:");
    enOperationType opType = readOpType();
    
    cout << "\nResult: " << calculate(Number1, Number2, opType) << endl;
    return 0;
}