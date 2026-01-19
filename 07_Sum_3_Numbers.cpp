#include <iostream>

using namespace std;

void readNumbers(int &n1, int &n2, int &n3) {
    cout << "Enter number 1: " << endl;
    cin >> n1;
    cout << "Enter number 2: " << endl;
    cin >> n2;
    cout << "Enter number 3: " << endl;
    cin >> n3;
}

int Sum(int n1, int n2, int n3) {
    return n1 + n2 + n3;
}

void printResult(int total) {
    cout << "\nThe sum is: " << total << endl;
}

int main() {
    int n1, n2, n3;
    readNumbers(n1, n2, n3);
    printResult(Sum(n1, n2, n3));
    return 0;
}