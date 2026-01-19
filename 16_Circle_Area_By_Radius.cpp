#include <iostream>
#include <cmath>

using namespace std;

float readRadius() {
    float r;
    cout << "Enter radius (r): " << endl;
    cin >> r;
    return r;
}

float Area(float r) {
    const float PI = 3.14159;
    float area = PI * pow(r, 2);
    return area;

}

void printResult(float area) {
    cout << "\nThe area is: " << area << endl;
}

int main() {
    printResult(Area(readRadius()));
    return 0;
}
