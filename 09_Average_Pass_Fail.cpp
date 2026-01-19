#include <iostream>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void readNumbers(int &n1, int &n2, int &n3) {
    cout << "Enter number 1:" << endl;
    cin >> n1;
    cout << "Enter number 2:" << endl;
    cin >> n2;
    cout << "Enter number 3:" << endl;
    cin >> n3;
}

int Sum(int n1, int n2, int n3) {
    return n1 + n2 + n3;
}

float Avg(int n1, int n2, int n3) {
    return (float)Sum(n1, n2, n3) / 3;
}

enPassFail enCheckAvg(float avg) {
    if (avg >= 60) { 
        return enPassFail::Pass;
    } else {
        return enPassFail::Fail;
    }
}

void printResult(float avg) {
    cout << "\nThe average is " << avg << endl;
    if (enCheckAvg(avg) == enPassFail::Pass) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }
}

int main() {
    int n1, n2, n3;
    readNumbers(n1, n2, n3);
    printResult(Avg(n1, n2, n3));
    return 0;
}