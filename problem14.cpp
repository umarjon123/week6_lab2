#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
    int months = years * 12;
    return investmentAmount * pow(1.0 + monthlyInterestRate, months);
}

int main() {
    double amount;
    double annualRatePercent;
    cout << "Enter investment amount (e.g. 1000): ";
    cin >> amount;
    cout << "Enter annual interest rate (percent, e.g. 3.25): ";
    cin >> annualRatePercent;

    double monthlyRate = (annualRatePercent / 100.0) / 12.0;

    cout << fixed << setprecision(2);
    cout << "\nYears  Future Value\n";
    cout << "-------------------\n";
    for (int years = 1; years <= 30; ++years) {
        double fv = futureInvestmentValue(amount, monthlyRate, years);
        cout << setw(5) << years << "  " << setw(12) << fv << '\n';
    }
    return 0;
}