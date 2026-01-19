#include <iostream>
#include <cmath>

using namespace std;

float readSquareSide() {
    float a;
    cout << "Enter square side (a): " << endl;
    cin >> a;
    return a;
}

float Area(float a) {
    const float PI = 3.14159;
    float area = (PI * pow(a, 2)) / 4;
    return area;
}

void printResult(float area) {
    cout << "\nThe area is: " << area << endl;
}

int main() {
    printResult(Area(readSquareSide()));
    return 0;
}