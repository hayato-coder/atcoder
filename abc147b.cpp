#include <iostream>
using namespace std;

string S;
int cnt = 0;

int main() {
  cin >> S;
  int i = 0, j = S.length()- 1;
  while (i < j) {
    if (S[i] != S[j])
      cnt++;
    i++;
    j--;
  }
  cout << cnt << endl;
}
