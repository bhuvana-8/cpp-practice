#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    bool found = false;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Duplicate elements: ";
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (!found)
        cout << "None";

    return 0;
}
