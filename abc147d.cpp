#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define M 1000000007
typedef long long ll;

ll ruijo(int i) {
  ll ans = 1;
  for (int j = 0; j < i; j++) {
    ans = ans*2%M;
  }
  return ans;
}

int main() {
  int N;
  ll A[300005];
  int i, j;
  ll ans = 0;
  cin >> N;
  for (i = 0; i < N; i++) {
    cin >> A[i];
  }
  sort(A, A+N);
  ll temp = A[N-1];
  int cnt = 0;
  while (temp > 0) {
    temp /= 2;
    cnt++;
  }
  for (i = 0; i < cnt; i++) {
    ll sum1 = 0;
    ll sum2 = 0;
    for (j = 0; j < N; j++) {
      if (A[j] % 2 == 0)
        sum1++;
      else
        sum2++;
      A[j] /= 2;
    }
    ans += ((sum1 * sum2)%M * (ruijo(i) % M)) % M;
  }
  cout << ans%M << endl;
  return 0;
}
