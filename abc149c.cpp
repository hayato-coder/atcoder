#include <iostream>
using namespace std;
#define m 100005

int main () {
  int X;
  int i, j;
  bool v[m];
  cin >> X;
  for (i = 0; i < m; i++)
    v[i] = true;
  v[0] = v[1] = false;
  for (i = 2; i < m; i++)
    if (v[i])
      for (j = 2*i; j < m; j += i)
        v[j] = false;
  for (i = X; i < m; i++) {
    if (v[i]) {
      cout << i << endl;
      break;
    }
  }
}
