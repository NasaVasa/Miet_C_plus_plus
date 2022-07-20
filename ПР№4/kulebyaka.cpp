#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int main() {
    srand(time(NULL));
    const int n = 20;
    int sum, kol;
    int A[n], C[n];
    cout << "Array A:" << endl;
    for (int i = 0; i < n; ++i) {
        A[i] = rand() / 100 - 100;
        if (A[i] > 0) {
            sum += A[i];
        }
        cout << setw(5) << left << A[i];
    }
    cout << endl << "The sum of all positive components of the array A: " << sum << endl;
    cout << "Array C:" << endl;
    for (int i = 0; i < n; ++i) {
        C[i] = rand() / 100 - 100;
        if (C[i] < 0) {
            kol += 1;
        }
        cout << setw(5) << left << C[i];
    }
    cout << endl << "The number of negative components of the array C: " << kol << endl;
    return 1;
}