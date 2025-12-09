#include<iostream>
using namespace std;

int main() {
    int curr_number;
    int even = 0;
    int odd = 0;

    while (cout << "Enter an integer: ") {
        cin >> curr_number;
        if (curr_number == 0) {
            break;
        }
        if (curr_number % 2 == 0 && curr_number != 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}
