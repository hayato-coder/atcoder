#include <iostream>
#include <complex>
using namespace std;

int main() {
  int N, i, j;
  int P[10], Q[10];
  int a=0, b=0;
  int v[8] = {40320, 5040, 720, 120, 24, 6, 2, 1};
  cin >> N;
  for (i = 0; i < N; i++)
    cin >> P[i];
  for (i = 0; i < N; i++)
    cin >> Q[i];
  for (i = 0; i < N; i++) {
    int cnt = 0;
    if (i != 0) {
      for (j = 0; j < i; j++) {
        if (P[j] < P[i])
          cnt += 1;
      }
    }
    if (i != N-1)
      a += (P[i]-1-cnt)*v[8-N+i+1];
    else
      a += P[i]-cnt;
  }
  for (i = 0; i < N; i++) {
    int cnt = 0;
    if (i != 0) {
      for (j = 0; j < i; j++) {
        if (Q[j] < Q[i])
          cnt += 1;
      }
    }
    if (i != N-1)
      b += (Q[i]-1-cnt)*v[8-N+i+1];
    else
      b += Q[i]-cnt;
  }
  cout << abs(a-b) << endl;
}
