#include <iostream>

using namespace std;

void readNumbers(int &n1, int &n2) {
    cout << "Enter number 1:" << endl;
    cin >> n1;
    cout << "Enter number 2:" << endl;
    cin >> n2;
}

void Fswap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void printNumbers(int n1, int n2) {
    cout << "Number 1 is: " << n1 << endl;
    cout << "Number 2 is: " << n2 << endl;
}

int main() {
    int n1, n2;
    readNumbers(n1, n2);
    
    cout << "\nBefore Swap:" << endl;
    printNumbers(n1, n2);
    
    Fswap(n1, n2);
    
    cout << "\nAfter Swap:" << endl;
    printNumbers(n1, n2);
    
    return 0;
}