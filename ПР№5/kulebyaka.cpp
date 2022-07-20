#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int main() {
    srand((unsigned) time(NULL));
    double a[3][4];
    double b;
    double z[12];
    cout << "Array A:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            a[i][j] = (double) rand() / 1000;
            cout << setw(8)<<left << a[i][j];
        }
        cout << endl;
    }
    cout << "Enter 'b':";
    cin >> b;
    int kol = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (a[i][j] > b) {
                z[kol] = a[i][j];
                ++kol;
            }
        }
    }
    cout<<"Array of matrix elements A large then 'b':"<<endl;
    for (int i = 0; i < kol; ++i) {
        cout<<setw(8)<<left<<z[i];
    }
    return 1;
}