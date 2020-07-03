#include <iostream>
using namespace std;
typedef long long ll;

int main() {
  ll A, B, K;
  cin >> A >> B >> K;
  if (A >= K)
    cout << A - K  << ' ' << B << endl;
  else if (A + B >= K)
    cout << '0' << ' '<< A + B - K << endl;
  else
    cout << '0' << ' ' << '0' << endl;
}
