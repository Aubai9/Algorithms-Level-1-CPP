#include <iostream>

using namespace std;

float readPositiveNumber(string msg) {
    float number;
    do {
        cout << msg << endl;
        cin >> number;
    } while (number < 0);
    return number;
}

float calcNumberOfWeeks(float noHours) {
    return noHours / 168; // 168 = 24 * 7
}

float calcDays(float noHours) {
    return noHours / 24;
}

int main() {
    float numberOfHours = readPositiveNumber("Enter number of hours:");
    
    float numberOfWeeks = calcNumberOfWeeks(numberOfHours);
    float numberOfDays = calcDays(numberOfHours);
    
    cout << "\nNumber of Weeks: " << numberOfWeeks << endl;
    cout << "Number of Days: " << numberOfDays << endl;
    
    return 0;
}