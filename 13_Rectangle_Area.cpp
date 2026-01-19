#include <iostream>

using namespace std;

void readNumbers(float &a, float &b) {
    cout << "Enter width (a): " << endl;
    cin >> a;
    cout << "Enter length (b): " << endl;
    cin >> b;
}

float calcArea(float a, float b) {
    return a * b;
}

void printArea(float area) {
    cout << "\nArea is: " << area << endl;
}

int main() {
    float a, b;
    readNumbers(a, b);
    printArea(calcArea(a, b));
    return 0;
}