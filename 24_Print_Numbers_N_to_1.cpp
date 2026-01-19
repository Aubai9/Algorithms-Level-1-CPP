#include <iostream>

using namespace std;

int readNumber() {
    int n;
    cout << "Enter number (N): " << endl;
    cin >> n;
    return n;
}

void printFromNto1(int n) {
    int i = n;
    while (i >= 1) {
        cout << i << endl;
        i--;
    }
}

int main() {
    printFromNto1(readNumber());
    return 0;
}