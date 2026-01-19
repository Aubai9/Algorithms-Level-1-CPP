#include <iostream>
#include <cmath>

using namespace std;

float readCircumference() {
    float l;
    cout << "Enter circumference (l): " << endl;
    cin >> l;
    return l;
}

float Area(float l) {
    const float PI = 3.14159;
    float area = (pow(l, 2)) / (4 * PI);
    return area;
}

void printResult(float area) {
    cout << "\nThe area is: " << area << endl;
}

int main() {
    printResult(Area(readCircumference()));
    return 0;
}