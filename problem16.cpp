#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void printMatrix(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int val = rand() % 1001;
            cout << setw(5) << val << " ";
        }
        cout << '\n';
    }
}


int main() {
    srand((unsigned)time(nullptr)); // seed RNG
    int n;
    cout << "Enter n (matrix size): ";
    cin >> n;
    if (n <= 0) {
        cout << "n must be positive.\n";
        return 0;
    }
    cout << "Random " << n << "x" << n << " matrix (values 0..1000):\n";
    printMatrix(n);
    return 0;
}