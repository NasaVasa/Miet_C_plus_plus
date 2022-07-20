#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int main() {
    srand(time(NULL));
    const int n = 70;
    int mul=1, kol;
    long A[n];
    cout << "Array A:" << endl;
    for (int i = 0; i < n; ++i) {
        A[i] = rand() / 10000;
        if (A[i] > 0) {
            mul *= A[i];
            kol += 1;
        }
        cout << setw(6) << left << A[i];

    }
    cout << endl << "The multiply of all positive components of the array A: " << mul << endl;
    cout << "The number of all positive components of the array A: " << kol << endl;
    return 1;
}