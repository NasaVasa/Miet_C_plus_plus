/** Блок 1
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
/** Блок 2
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
 