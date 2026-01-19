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

float CalculateMonthlyInstallment(float TotalAmount, float TotalMonths) {
    return (float)(TotalAmount / TotalMonths);
}

int main() {
    float TotalAmount = readPositiveNumber("Enter Total Loan Amount:");
    float TotalMonths = readPositiveNumber("Enter Number of Months to Pay:");
    
    cout << "\nYou need to pay " << CalculateMonthlyInstallment(TotalAmount, TotalMonths) << " per Month." << endl;
    return 0;
}