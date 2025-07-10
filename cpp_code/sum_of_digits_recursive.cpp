#include <iostream>
using namespace std;

int sumDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int num;
    cin >> num;

    if (num < 0)
        num = -num;

    cout << "Sum of digits: " << sumDigits(num);
    return 0;
}
