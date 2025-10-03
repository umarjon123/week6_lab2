#include <iostream>
using namespace std;

void displaySortedNumber (double a, double b, double c) {
    if (a > b) {
        double temp = a;

        a = b;
        b = temp;
    }
    if (b > c) {
        double temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }
    cout << a << " " << b << " " << c << endl;
}

int main() {
    double num1, num2, num3;
    cout << "Enter three numbers"
            ": ";
    cin >> num1 >> num2 >> num3;
    displaySortedNumber(num1, num2, num3);
    return 0;
}