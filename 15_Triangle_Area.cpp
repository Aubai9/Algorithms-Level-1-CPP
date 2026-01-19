#include <iostream>

using namespace std;

void readNumbers(float &a, float &h) {
    cout << "Enter base (a): " << endl;
    cin >> a;
    cout << "Enter height (h): " << endl;
    cin >> h;
}

float Area(float a, float h) {
    return (a * h) / 2;
}

void printResult(float area) {
    cout << "\nThe area is: " << area << endl;
}

int main() {
    float a, h;
    readNumbers(a, h);
    printResult(Area(a, h));
    return 0;
}