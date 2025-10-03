#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>


bool isPalindrome(int n) {
    std::string s = std::to_string(n);
    std::string reversed_s = s;
    std::reverse(reversed_s.begin(), reversed_s.end());
    return s == reversed_s;
}

int main() {
    using namespace std;
    vector<int> evenPalindromes;
    int num = 0;
    while (evenPalindromes.size() < 50) {
        if (num % 2 == 0 && isPalindrome(num)) {
            evenPalindromes.push_back(num);
        }
        num++;
    }

    for (size_t i = 0; i < evenPalindromes.size(); ++i) {
        cout << setw(5) << evenPalindromes[i];
        if ((i + 1) % 5 == 0) {
            cout << endl;
        }
    }
    cout << endl;
    return 0;
}