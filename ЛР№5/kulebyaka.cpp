#include <iostream>
#include <iomanip>
#include <time.h>
#include <math.h>

using namespace std;

int main() {
    srand(time(NULL));
    int m, n;
    cout << "Enter m and n:";
    cin >> m >> n;
    int A[m][n];
    int Z[n];
    cout << "Array A[" << m << "][" << n << "]:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            A[i][j] = rand() / 100 - 100;
            cout << setw(6) << left << A[i][j];
        }
        cout << endl;
    }
    for (int j = 0; j < n; ++j) {
        int max = -INFINITY;
        int min = INFINITY;
        for (int i = 0; i < m; ++i) {
            if (A[i][j] > max) {
                max = A[i][j];
            }
            if (A[i][j] < min) {
                min = A[i][j];
            }
        }
        Z[j] = max + min;
    }
    cout << "Array Z consisting of the sum of the largest and smallest values of each column of array A:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << setw(6) << left << Z[i];
    }
    return 1;
}