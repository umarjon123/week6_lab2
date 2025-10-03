#include <iostream>
#include <cmath> // For pow and sqrt functions

using namespace std;


double pi = 3.1415;
double e = 2.7182;


double seriesA(int n);
double seriesB(int n);
double seriesC(int n);
double seriesD(int n);


double seriesA(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += pi * pow(2, -i);
    }
    return sum;
}

double seriesB(int n) {
    double product = 1.0;
    for (int i = 1; i <= n; ++i) {
        product *= (pi / 2.0) * pow(i, e);
    }
    return product;
}

double seriesC(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(-1, i) * pow(2, i) / (2 * pi + i);
    }
    return sum;
}

double seriesD(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += (2 * i * pi) / pow(e, i);
    }
    return sqrt(sum);
}

int main() {
    int n_val = 5;
    cout << "Series A for n=" << n_val << ": " << seriesA(n_val) << endl;
    cout << "Series B for n=" << n_val << ": " << seriesB(n_val) << endl;
    cout << "Series C for n=" << n_val << ": " << seriesC(n_val) << endl;
    cout << "Series D for n=" << n_val << ": " << seriesD(n_val) << endl;

    return 0;
}