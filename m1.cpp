#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    // Calculate sum using the formula
    int sum = (n * (n + 1)) / 2;

    cout << "The sum of all natural numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
