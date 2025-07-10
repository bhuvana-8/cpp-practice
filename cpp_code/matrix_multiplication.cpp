#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible.";
        return 0;
    }

    int A[r1][c1], B[r2][c2], result[r1][c2];

    // Input matrices
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            cin >> A[i][j];

    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            cin >> B[i][j];

    // Multiply
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < c1; ++k)
                result[i][j] += A[i][k] * B[k][j];
        }

    // Output
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}
