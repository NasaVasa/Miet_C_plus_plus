/** Блок 1
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double x, y;
    cout << "x>";
    cin >> x;
    if (x > 12.5) {
        y = x * x - 3 + 2.5 * x * x;
    } else if (x >= 0) {
        y = exp(x) + 5 + cos(0.001 * x);
    } else {
        y = x * x;
    }
    cout << "y=" << y <<endl;
    return 1;
}
 **/
/** Блок 2
#include <iostream>

using namespace std;

int main(){
    char q;
    cout << "Enter a character:";
    cin >> q;
    switch (q) {
        case '.':
        case ',':
        case ':':
        case ';':
        case '!':
        case '?':
        case '"':
            cout << q << " is a punctuation mark." << endl;
            break;
        default:
            cout << q << " is not a punctuation mark." << endl;
            break;
    }
    return 1;
}
 **/