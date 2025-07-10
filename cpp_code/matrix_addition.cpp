#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int A[r][c], B[r][c], sum[r][c];

    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> A[i][j];

    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> B[i][j];

    cout << "Sum of matrices:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            sum[i][j] = A[i][j] + B[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
