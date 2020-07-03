#include <iostream>
using namespace std;

int main() {
  int N, i;
  string S;
  string T;
  string ans ;
  cin >> N;
  cin >> S >> T;
  for (i = 0; i < N; i++) {
    cout << S[i] << T[i];
  }
  cout << endl;
}
