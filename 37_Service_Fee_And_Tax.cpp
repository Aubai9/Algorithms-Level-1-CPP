#include <iostream>

using namespace std;

float readPositiveNumber(string msg) {
    float number;
    do {
        cout << msg << endl;
        cin >> number;
    } while (number < 0);
    return number;
}

float calcServiceFee(float billValue) {
    return billValue * 1.1;
}

float calcSalesTax(float billValueAfterServices) {

    return billValueAfterServices * 1.16;
}

int main() {
    float billValue = readPositiveNumber("Enter Bill Value: ");
    
    float billWithServiceFee = calcServiceFee(billValue);
    float totalBill = calcSalesTax(billWithServiceFee);
    
    cout << "\nBill Value: " << billValue << endl;
    cout << "Bill after Service Fee (10%): " << billWithServiceFee << endl;
    cout << "Total Bill after Sales Tax (16%): " << totalBill << endl;
    
    return 0;
}