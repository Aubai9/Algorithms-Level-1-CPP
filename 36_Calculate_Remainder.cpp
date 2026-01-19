#include <iostream>

using namespace std;

float readCashPaid() {
    float cashPaid;
    cout << "Enter Total Cash Paid: " << endl;
    cin >> cashPaid;
    return cashPaid;
}

float readTotalBill() {
    float TotalBill;
    cout << "Enter Total Bill Amount: " << endl;
    cin >> TotalBill;
    return TotalBill;
}

void printRemainder(float cashPaid, float totalBill) {
    float remainder = cashPaid - totalBill;
    cout << "\nRemainder: " << remainder << endl;
}

int main() {
    float totalBill = readTotalBill();
    float cashPaid = readCashPaid();
    
   
    if (cashPaid < totalBill) {
        cout << "\nAmount paid is not enough!" << endl;
    } else {
        printRemainder(cashPaid, totalBill);
    }
    
    return 0;
}