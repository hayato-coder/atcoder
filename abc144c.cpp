#include <iostream>
using namespace std;
typedef long long ll;

int main() {
  ll N;
  ll i, j, k;
  cin >> N;
  for (k = 1; k * k <= N; k++) {
    if (N % k  == 0) {
      i = k;
      j = N /k;
    }
  }
  cout << i+j-2 << endl;
}
