#include <iostream>

using namespace std;

int readNumber() {
    int n;
    cout << "Enter number (N): " << endl;
    cin >> n;
    return n;
}

void printFrom1ToN(int n) {
    int i = 1;
    while (i <= n) {
        cout << i << endl;
        i++;
    }
}

int main() {
    printFrom1ToN(readNumber());
    return 0;
}