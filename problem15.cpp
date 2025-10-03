#include <iostream>
#include <iomanip>
using namespace std;


void printASCII(char ch1, char ch2, int numberPerLine) {
    int count = 0;

    if (ch2 < ch1) {

        char tmp = ch1; ch1 = ch2; ch2 = tmp;
    }
    for (char c = ch1; c <= ch2; ++c) {
        cout << setw(3) << int(c) << "('" << c << "')" << "  ";
        ++count;
        if (count % numberPerLine == 0) cout << '\n';
    }
    if (count % numberPerLine != 0) cout << '\n';
}

int main() {
    cout << "ASCII values from 'a' to 'm' (6 per line):\n";
    printASCII('a', 'm', 6);
    return 0;
}