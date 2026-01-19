#include <iostream>
#include <cmath>

using namespace std;

float readDiameter() {
    float d;
    cout << "Enter Diameter (d): " << endl;
    cin >> d;
    return d;
}

float Area(float d) {
    const float PI = 3.14159;
    float area = (PI * pow(d, 2)) / 4;
    return area;
}

void printResult(float area) {
    cout << "\nThe area is: " << area << endl;
}

int main() {
    printResult(Area(readDiameter()));
    return 0;
}