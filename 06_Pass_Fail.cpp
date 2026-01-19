#include <iostream>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int readMark() {
    int mark;
    cout << "Enter mark: " << endl;
    cin >> mark;
    return mark;
}

enPassFail checkStatus(int mark) {
    if (mark >= 50) {
        return enPassFail::Pass;
    } else {
        return enPassFail::Fail;
    }
}

void printResult(int mark) {
    if (checkStatus(mark) == enPassFail::Pass) {
        cout << "\nPASS!!" << endl;
    } else {
        cout << "\nFAIL" << endl;
    }
}

int main() {
    printResult(readMark());
    return 0;
}