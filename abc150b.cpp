#include <iostream>
using namespace std;

int main() {
  int N, i;
  string S;
  int cnt = 0;
  cin >> N >> S;
  for (i = 0; i < N-2; i++) {
    if (S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C')
      cnt++;
  }
  cout << cnt << endl;
}
