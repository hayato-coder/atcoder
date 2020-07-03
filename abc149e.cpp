#include <iostream>
using namespace std;

int main() {
  int N, M;
  int A[100000];
  int v[10000000000];
  int i, j, k;
  long long count = 0;
  cin >> N >> M;
  for (i = 0; i < N; i++)
    cin >> A[i];
  k = 0;
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      v[k++] = A[i]*A[j];
    }
  }
  sort(v, v+N*N);
  for (i = N*N-1; i >= N*N-M; i--)
    count += v[i];
  cout << count << endl;
}
