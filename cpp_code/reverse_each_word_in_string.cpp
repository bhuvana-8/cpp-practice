#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    str += ' ';  // Append space to handle last word
    string word = "";

    cout << "Reversed words: ";
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ') {
            word += str[i];
        } else {
            for (int j = word.length() - 1; j >= 0; --j)
                cout << word[j];
            cout << " ";
            word = "";
        }
    }

    return 0;
}
