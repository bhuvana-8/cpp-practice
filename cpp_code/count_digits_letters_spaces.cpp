#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int letters = 0, digits = 0, spaces = 0;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z'))
            letters++;
        else if (str[i] == ' ')
            spaces++;
    }

    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}
