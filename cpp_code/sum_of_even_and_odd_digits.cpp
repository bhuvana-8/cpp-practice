#include <iostream>
using namespace std;

int main() {
    int num, even_sum = 0, odd_sum = 0;
    cin >> num;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            even_sum += digit;
        else
            odd_sum += digit;
        num /= 10;
    }

    cout << "Sum of even digits: " << even_sum << endl;
    cout << "Sum of odd digits: " << odd_sum << endl;

    return 0;
}
