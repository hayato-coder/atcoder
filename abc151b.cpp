#include <iostream>
using namespace std;

int main() {
  int N, K, M;
  int A[100];
  int i, j;
  int sum = 0;
  cin >> N >> K >> M;
  for (i = 0; i < N-1; i++) {
    cin >> A[i];
    sum += A[i];
  }
  if (sum > N*M)
    cout << '0' << endl;
  else if (sum < N*M-K)
    cout << "-1" << endl;
  else
    cout << N*M-sum << endl;
}
