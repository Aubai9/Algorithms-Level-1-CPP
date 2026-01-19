#include <iostream>

using namespace std;

float readNumber(string msg) {
    float number = 0;
    cout << msg << endl;
    cin >> number;
    return number;
}

float SumNumbers() {
    float number = 0;
    float sum = 0;
    // int counter = 0;

    do {
        number = readNumber("Enter number (-99 to stop):");
        
        if (number == -99) {
            break; 
        }
        
        sum += number;
        // counter++;
        
    } while (number != -99);

    return sum;
}

void printResult(float total) {
    cout << "\nTotal Sum: " << total << endl;
}

int main() {
    printResult(SumNumbers());
    return 0;
}