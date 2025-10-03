#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

string convertMillis(long millis) {
    long totalSeconds = millis / 1000;
    long hours = totalSeconds / 3600;
    long minutes = (totalSeconds % 3600) / 60;
    long seconds = totalSeconds % 60;

    stringstream ss;
    ss << hours << ":"
       << setfill('0') << setw(2) << minutes << ":"
       << setfill('0') << setw(2) << seconds;
    return ss.str();
}

int main() {
    long millisecondsInput;
    cout << "Enter milliseconds: ";
    cin >> millisecondsInput;

    string result = convertMillis(millisecondsInput);
    cout << "Formatted time: " << result << endl;

    return 0;
}

