#include <iostream>

using namespace std;

void readNumbers(int &n1, int &n2) {
    cout << "Enter number 1:" << endl;
    cin >> n1;
    cout << "Enter number 2:" << endl;
    cin >> n2;
}

int MaxOf2Numbers(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

void printResult(int Max) {
    cout << "Max is: " << Max << endl;
}

int main() {
    int n1, n2;
    readNumbers(n1, n2);
    printResult(MaxOf2Numbers(n1, n2));
    return 0;
}