#include <iostream>
#include <cmath>

using namespace std;

void readTriangleSides(float &a, float &b, float &c) {
    cout << "Enter side a: " << endl;
    cin >> a;
    cout << "Enter side b: " << endl;
    cin >> b;
    cout << "Enter side c: " << endl;
    cin >> c;
}

float CalculateP(float a, float b, float c) {
    // نصف المحيط
    return (a + b + c) / 2;
}

float Area(float a, float b, float c) {
    const float PI = 3.14159;
    float p = CalculateP(a, b, c);
    
    // القانون: PI * [ (abc) / (4 * sqrt(p*(p-a)*(p-b)*(p-c))) ]^2
    float radius = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    float area = PI * pow(radius, 2);
    
    return area;
}

void printResult(float area) {
    cout << "\nThe area is: " << area << endl;
}

int main() {
    float a, b, c;
    readTriangleSides(a, b, c);
    printResult(Area(a, b, c));
    return 0;
}