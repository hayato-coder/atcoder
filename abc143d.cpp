#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
  int N;
  int L[2005];
  int i, j, k;
  int cnt = 0;
  cin >> N;
  for (i = 0; i < N; i++)
    cin >> L[i];
  sort(L, L+N);
  for (i = 0; i < N; i++) {
    for (j = i+1; j < N; j++) {
      // cout << distance(L+j, lower_bound(L,L+N,i+j)) << endl;
      if (distance(L+j, lower_bound(L,L+N,L[i]+L[j])-1) > 0)
        cnt += distance(L+j, lower_bound(L,L+N,L[i]+L[j])-1);
    }
  }
  cout << cnt << endl;
}
