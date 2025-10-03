#include <iostream>
#include <chrono>
#include <ctime>

#include <iomanip>

using namespace std;

int main() {
    auto currentTime = chrono::system_clock::now();
    time_t timeT = chrono::system_clock::to_time_t(currentTime);
    tm* localTime = localtime(&timeT);

    cout << "Current date and time is " << put_time(localTime, "%B %d, %Y %H:%M:%S") << endl;

    return 0;
}
