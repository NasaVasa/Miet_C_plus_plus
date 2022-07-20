#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double m, v, E;
    const int c = 299792458;
    cout << "Enter m (kg): ";
    cin >> m;
    cout << "Enter v (m/s): ";
    cin >> v;
    E = (m * c * c) / sqrt(1 - pow(v / c, 2));
    cout << E << "J" << endl;
    return 1;
}