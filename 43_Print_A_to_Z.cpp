#include <iostream>

using namespace std;

void printA2Z() {
   
    for (int i = 65; i <= 90; i++) {
        cout << char(i) << endl;
    }
}

int main() {
    printA2Z();
    return 0;
}