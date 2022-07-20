/** Задание 1.2
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
const double pi = M_PI;

int main() {
    double m, s;
    cout << "Enter m:";
    cin >> m;
    cout << setw(2) << left << 'y' << setw(10) << right << 's' << endl;
    for (int y = 1; y <= 10; ++y) {
        if (1 + cos(y) < pi / 3) {
            s = 1 / (pow(2, -y) * sin(m));
        } else {
            s = pow(y, 1 / 3);
        }
        cout << setw(2) << left << y << setw(10) << right << setprecision(2) << s << endl;
    }
    return 1;
}
**/
/** Задание 1.1
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double m, x;
    cout << "Enter m:";
    cin >> m;
    cout << setw(2) << left << 'b' << setw(10) << right << 'x' << endl;
    for (double b = 0.38; b <= 1; b += 0.1) {
        if (sin(b) >= cos(b)) {
            x = pow(b, -5 / 8) / sin(m * pow(b, 1 / 5));
        } else {
            x = 1 / (m - sin(b));
        }
        cout << setw(2) << left << b << setw(10) << right << setprecision(2) << x << endl;
    }
    return 1;
}
**/
/** Задание 2
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, kol, sum = 0;
    int max = -INFINITY;
    do {
        cin >> a;
        if (a > max) {
            max = a;
        }
        if (a > 0) {
            kol += 1;
        }
        if (a < 0) {
            sum += a;
        }
    } while (a != 5);
    cout << "Max: " << max << '\n'
         << "Number of positive numbers: " << kol << '\n'
         << "Sum of negative numbers: " << sum << endl;
    return 1;
}
 **/
/** Задание 3
#include <iostream>
#include <math.h>

using namespace std;

int main() {
   int a, sum = 0;
   int mul = 1;
   int min = INFINITY;
   do {
       cin >> a;
       if (a < min) {
           min = a;
       }
       if (a < 0) {
           mul *= a;
       }
       if (a > 0) {
           sum += a;
       }
   } while (a != 100);
   cout << "Min: " << min << '\n'
        << "Multiply of negative numbers: " << mul << '\n'
        << "Sum of positive numbers: " << sum << endl;
   return 1;
}
 **/
/** Задание 4
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
   float a = 2.8, b = -0.3, c = 4;
   double w;
   for (float x = 1; x <= 2; x += 0.05) {
       if (x < 1.2) {
           w = a * x * x + b * x + c;
       } else if (x == 1.2) {
           w = a / x + sqrt(x * x + 1);
       } else {
           w = (a + b * x) / sqrt(x * x + 1);
       }
       cout<<setw(5)<<left<<x<<setw(10)<<right<<w<<endl;
   }
   return 1;
}
 **/
/** Задание 5
#include <iostream>

using namespace std;

int main() {
  int f, a, kol;
  cin >> f;
  do {
      cin >> a;
      if (a > f) {
          ++kol;
      }
  } while (a != 3);
  cout << "The number of numbers, which bigger than the first number entered: " << kol;
  return 1;
}
**/
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, zn=0;
    do {
        cin >> a;
        if (a ==0) {
            zn ++;
        }
    } while (a != -10);
    cout << zn;
    return 1;
}


