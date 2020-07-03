#include <iostream>
using namespace std;

int main() {
  int N, i;
  string S;
  int cnt = 1;
  cin >> N >> S;
  for (i = 1; i < N; i++) {
    if (S[i] != S[i-1])
      cnt++;
  }
  cout << cnt << endl;
}
