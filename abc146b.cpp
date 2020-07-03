#include <iostream>
#include <string>
using namespace std;

int main(){
  int N, i;
  string S;
  cin >> N >> S;
  for (i = 0; i < S.length(); i++) {
    int x = S[i] - 'A';
    x = (x + N) % 26;
    putchar('A'+x);
  }
  cout << endl;
 }
