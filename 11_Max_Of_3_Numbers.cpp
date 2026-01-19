#include <iostream>

using namespace std;

void readNumbers(int &n1, int &n2, int &n3) {
    cout << "Enter number 1:" << endl;
    cin >> n1;
    cout << "Enter number 2:" << endl;
    cin >> n2;
    cout << "Enter number 3:" << endl;
    cin >> n3;
}

int MaxOf3Numbers(int n1, int n2, int n3) {
    if (n1 > n2) {
        if (n1 > n3)
            return n1;
        else
            return n3;
    } else {
        if (n2 > n3)
            return n2; 
        else
            return n3; 
    }
}

void printResult(int Max) {
    cout << "Max is: " << Max << endl;
}

int main() {
    int n1, n2, n3;
    readNumbers(n1, n2, n3);
    printResult(MaxOf3Numbers(n1, n2, n3));
    return 0;
}