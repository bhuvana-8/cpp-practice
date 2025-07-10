#include <iostream>
using namespace std;

int main() {
    string binary;
    cin >> binary;
    int decimal = 0;

    for (int i = 0; i < binary.length(); ++i) {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    cout << "Decimal value: " << decimal;
    return 0;
}
