#include <iostream>
#include <cmath>

using namespace std;

void readTriangleData(float &a, float &b) {
    cout << "Enter triangle side (a): " << endl;
    cin >> a;
    cout << "Enter triangle base (b): " << endl;
    cin >> b;
}

float Area(float a, float b) {
    const float PI = 3.14159;
    // القانون المعقد لحساب المساحة في هذه الحالة
    float area = (PI * pow(b, 2) * (2 * a - b)) / (4 * (2 * a + b));
    return area;
}

void printResult(float area) {
    cout << "\nThe area is: " << area << endl;
}

int main() {
    float a, b;
    readTriangleData(a, b);
    printResult(Area(a, b));
    return 0;
}