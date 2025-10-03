#include <iostream>
using namespace std;

int rollDies() {
    int die1 = 1+ rand()% 6;
    int die2 = 1+ rand()% 6;
    int sum = die1 + die2;
    cout << "You rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}


int main() {
    srand(time(0));
    int sum = rollDies();
    int point = 0;


    switch (sum) {

        case 7:
        case 11:
            cout << "you wins" << endl;
            break;
        case 2:
        case 3:
        case 12:
            cout << "you lose" << endl;
            break;
        default:
            cout << "Point is " << sum << endl;
            break;

    }
    return 0;

}