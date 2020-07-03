#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

ll A, B, X;
ll r, l, m;

ll sum(ll N) {
  ll temp = N;
  ll cnt = 0;
  while (temp != 0) {
    temp /= 10;
    cnt++;
  }
  return N*A+cnt*B;
}

int main(){
  cin >> A >> B >> X;
  r = 0;
  l = X/A+1;
  while (l != r) {
    m = (r + l) /2;
    if (sum(m) <= X) {
      if (sum(m+1) > X)
        break;
      else
        r = m;
    }
    else {
      l = m;
    }
  }
  if (m <= 1000000000)
    cout << m << endl;
  else
    cout << "1000000000" << endl;
}
