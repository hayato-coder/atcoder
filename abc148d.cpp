#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N, i, j=1;
  int a[200000];
  cin >> N;
  for (i = 0; i < N; i++) {
    cin >> a[i];
  }
  for (i = 0; i < N; i++) {
    if (a[i] == j)
      j++;
  }
  if (j != 1)
    cout << N - j + 1 << endl;
  else
    cout << "-1" << endl;
}
