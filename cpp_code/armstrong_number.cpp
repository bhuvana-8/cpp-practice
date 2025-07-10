#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, sum = 0, original, digits = 0;
    cin >> num;
    original = num;

    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
