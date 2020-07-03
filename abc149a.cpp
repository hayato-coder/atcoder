#include <iostream>
using namespace std;

int main() {
  string S, T;
  int i;
  cin >> S >> T;
  for (i = 0; i < T.size(); i++)
    cout << T[i];
  for (i = 0; i < S.size(); i++)
    cout << S[i];
  cout << endl;
}
