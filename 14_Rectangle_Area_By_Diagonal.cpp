#include <iostream>
#include <cmath>

using namespace std;

void readNumbers(float &a, float &d) {
    cout << "Enter side area (a): " << endl;
    cin >> a;
    cout << "Enter diagonal (d): " << endl;
    cin >> d;
}

float Area(float a, float d) {
 
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

void printResult(float area) {
    cout << "\nThe area is: " << area << endl;
}

int main() {
    float a, d;
    readNumbers(a, d);
    printResult(Area(a, d));
    return 0;
}