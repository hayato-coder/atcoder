#include <iostream>
using namespace std;
#define  M 1000000007
typedef long long ll;

ll factorial(int n) {
  ll sum = 1;
  for (int i = 1; i <= n; i++) {
    sum *= i;
    sum %= M;
  }
  return sum;
}

template< typename T, typename U>
T mod_pow(T x, U n, const U &p) {
  T ret = 1;
  while(n > 0) {
    if(n & 1) (ret *= x) %= p;
    (x *= x) %= p;
    n >>= 1;
  }
  return ret;
}


int main() {
  int X, Y;
  cin >> X >> Y;
  if ((X + Y) % 3  != 0)
    cout << '0' << endl;
  else {
    int n = (X+Y)/3;
    int r = X - n;
    if (r < 0 || r > n)
      cout << '0' << endl;
    else {
      ll s = factorial(n);
      ll t = factorial(r);
      ll u = factorial(n-r);
      t = mod_pow(t, M-2, M);
      u = mod_pow(u, M-2, M);
      cout << ((s*t)%M)*u%M << endl;
    }
  }
}
