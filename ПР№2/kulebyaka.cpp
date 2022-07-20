/** 1.1 задание
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a, b, x, Y;
    cout << "a>";
    cin >> a;
    cout << "b>";
    cin >> b;
    cout << "x>";
    cin >> x;
    if (x * x >= a * a * a) {
        Y = exp(a * x + 2) + tan(pow(cos(4 * a * x * x * x), 2)) + log(2.6);
    } else {
        Y = atan(a * a / (2 * x)) + log(abs(4 * a * a * b));
    }
    cout << "Y=" << Y << endl;
    return 1;
}
 **/
/** 1.2 задание
#include <iostream>
#include <math.h>

using namespace std;

int main() {
   double a, b, x, Y;
   cout << "a>";
   cin >> a;
   cout << "b>";
   cin >> b;
   cout << "x>";
   cin >> x;
   if (x < a * b) {
       Y = cos(6 * x) * sin(exp(a * x + b) - a * x) + 2 * a;
   } else {
       Y = sqrt(pow(sin(log(a*x*x)),2)+b*pow(cos(exp(a*x+b)),2));
   }
   cout << "Y=" << Y << endl;
   return 1;
}
 **/
/** 1.3 задание
#include <iostream>
#include <math.h>

using namespace std;

int main() {
   double a, b, x, Y;
   cout << "a>";
   cin >> a;
   cout << "b>";
   cin >> b;
   cout << "x>";
   cin >> x;
   if (a<=cos(b)) {
       Y = cos(2*x)*log(abs(a*x+b));
   } else {
       Y = atan(cos(a*b))+exp(a*x+b);
   }
   cout << "Y=" << Y << endl;
   return 1;
}
 **/
/** 2.1 задание
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
/** 3.2 задание
#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Enter a year: ";
    cin >> a;
    if ((a > 0 and a % 4 == 0) or (a < 0 and a % 4 == -1)) {
        cout << a << " is a leap year" << endl;
    } else {

        cout << a << " is not a leap year" << endl;
    }
    return 1;
}
 **/
/** 3.3 задание
#include <iostream>

using namespace std;

int main() {
  int a;
  cout << "Enter number: ";
  cin >> a;
  if (a%2==0) {
      cout << a << " is an even number" << endl;
  } else {

      cout << a << " is an odd number" << endl;
  }
  return 1;
}
 **/
/** 3.4 задание
#include <iostream>

using namespace std;

int main() {
 int month;
 cout << "Enter month number:";
 cin >> month;
 switch (month) {
     case 1:
         cout << "Yanuary" << endl;
         break;
     case 2:
         cout << "February" << endl;
         break;
     case 3:
         cout << "March" << endl;
         break;
     case 4:
         cout << "April" << endl;
         break;
     case 5:
         cout << "May" << endl;
         break;
     case 6:
         cout << "Yune" << endl;
         break;
     case 7:
         cout << "July" << endl;
         break;
     case 8:
         cout << "August" << endl;
         break;
     case 9:
         cout << "September" << endl;
         break;
     case 10:
         cout << "October" << endl;
         break;
     case 11:
         cout << "November" << endl;
         break;
     case 12:
         cout << "December" << endl;
         break;
     default:
         cout << "ERROR" << endl;
         break;
 }
 return 1;
}
**/