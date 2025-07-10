#include <iostream>
using namespace std;

bool isPresent(int arr[], int size, int val) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == val) return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int arr[n], unique[n], k = 0;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n; ++i) {
        if (!isPresent(unique, k, arr[i])) {
            unique[k++] = arr[i];
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; ++i)
        cout << unique[i] << " ";

    return 0;
}
