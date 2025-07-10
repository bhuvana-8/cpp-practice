#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string result = "";
    int count = 1;

    for (int i = 1; i <= s.length(); ++i) {
        if (s[i] == s[i - 1]) count++;
        else {
            result += s[i - 1] + to_string(count);
            count = 1;
        }
    }

    cout << "Compressed String: " << result << endl;
    return 0;
}
