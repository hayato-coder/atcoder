#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N;
  int A[100005];
  int i, j;
  pair<int, int> p[100005];
  cin >> N;
  for (i = 0; i < N; i++) {
    cin >> A[i];
    p[i] = make_pair(A[i], i+1);
  }
  sort(p, p+N);
  for (i = 0; i < N; i++)
    cout << p[i].second << endl;
}
