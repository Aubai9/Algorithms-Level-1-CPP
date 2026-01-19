#include <iostream>

using namespace std;

float readPositiveNumber(string msg) {
    float number;
    do {
        cout << msg << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

float CalculateMonthsToPay(float TotalAmount, float MonthlyPayment) {
    return (float)(TotalAmount / MonthlyPayment);
}

int main() {
    float TotalAmount = readPositiveNumber("Enter Total Loan Amount:");
    float MonthlyPayment = readPositiveNumber("Enter Monthly Payment:");
    
    cout << "\nYou need " << CalculateMonthsToPay(TotalAmount, MonthlyPayment) << " Months to pay off the loan." << endl;
    return 0;
}