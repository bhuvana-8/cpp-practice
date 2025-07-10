#include <iostream>
using namespace std;

void rotate(int arr[], int n, int k) {
    k %= n;
    int temp[n];
    for (int i = 0; i < n; ++i) {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; ++i)
        arr[i] = temp[i];
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    rotate(arr, n, k);

    cout << "Rotated Array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    return 0;
}
