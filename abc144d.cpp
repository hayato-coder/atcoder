#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const long double pi = acos(-1);

int main() {
  long double a, b, x;
  long double angle;
  cin >> a >> b >> x;
  long double area = x / a;
  if (x <= a*a*b/2) {
    angle = atan(b*b/(2*area));
  }
  else
    angle = atan(2*b/a-2*area/(a*a));
  cout << setprecision(10) << angle *180 /pi << endl;
}
