#include <iostream>
#include <string>

using namespace std;

struct stInfo {
    string firstName;
    string lastName;
};

stInfo readInfo() {
    stInfo Info;
    cout << "Enter First Name: " << endl;
    cin >> Info.firstName;
    cout << "Enter Last Name: " << endl;
    cin >> Info.lastName;
    return Info;
}

string getFullName(stInfo Info) {
    string fullName = "";
    fullName = Info.firstName + " " + Info.lastName;
    return fullName;
}

void printInfo(string fullName) {
    cout << "\nFull Name is: " << fullName << endl;
}

int main() {
    printInfo(getFullName(readInfo()));
    return 0;
}