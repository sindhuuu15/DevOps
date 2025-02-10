#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Take the input
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // Convert the integer to a string to easily work with digits
    string num = to_string(n);

    // Sort the digits in ascending order
    sort(num.begin(), num.end());

    // Remove leading zeros if any
    int index = 0;
    while (index < num.size() && num[index] == '0') {
        index++;
    }

    // If there are any non-zero digits, make sure the lowest non-zero digit is placed at the start
    if (index > 0 && index < num.size()) {
        swap(num[0], num[index]);
    }

    // Output the result
    cout << "The lowest possible number formed is: " << num << endl;

    return 0;
}
