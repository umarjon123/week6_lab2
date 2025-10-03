#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidPassword(const string& password) {
    if (password.size() < 8) return false;
    int digitCount = 0;
    for (char c : password) {
        if (!isalnum(static_cast<unsigned char>(c))) return false;
        if (isdigit(static_cast<unsigned char>(c))) digitCount++;
    }
    return digitCount >= 2;
}

int main() {
    string pass;
    cout << "Enter password: ";
    cin >> pass;
    if (isValidPassword(pass))
        cout << "Valid password\n";
    else
        cout << "Invalid password\n";
    return 0;
}