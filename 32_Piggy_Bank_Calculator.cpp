#include <iostream>

using namespace std;

struct stPiggyBankContent {
    int pennies;
    int nickels;
    int dimes;
    int quarters;
    int dollars;
};

stPiggyBankContent readPiggyBankContent() {
    stPiggyBankContent PiggyBankContent;
    
    cout << "Enter Pennies: " << endl;
    cin >> PiggyBankContent.pennies;
    cout << "Enter Nickels: " << endl;
    cin >> PiggyBankContent.nickels;
    cout << "Enter Dimes: " << endl;
    cin >> PiggyBankContent.dimes;
    cout << "Enter Quarters: " << endl;
    cin >> PiggyBankContent.quarters;
    cout << "Enter Dollars: " << endl;
    cin >> PiggyBankContent.dollars;
    
    return PiggyBankContent;
}

int calcTotalPennies(stPiggyBankContent PiggyBankContent) {
    int TotalPennies = 0;
    TotalPennies = PiggyBankContent.pennies * 1 + 
                   PiggyBankContent.nickels * 5 + 
                   PiggyBankContent.dimes * 10 + 
                   PiggyBankContent.quarters * 25 + 
                   PiggyBankContent.dollars * 100;
    return TotalPennies;
}

int main() {
    int TotalPennies = calcTotalPennies(readPiggyBankContent());
    
    cout << "\nTotal Pennies: " << TotalPennies << endl;
    cout << "Total Dollars: " << (float)TotalPennies / 100 << endl;
    
    return 0;
}