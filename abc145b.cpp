#include <iostream>
using namespace std;

int N;
string S;

int main(){
  int i, j;
  int flag = 0;
  cin >> N >> S;
  if (N % 2 == 0) {
    j = N/2;
    for (i = 0; i < N/2; i++) {
      if (S[i] != S[j]) {
        flag = 1;
        puts("No");
        break;
      }
      j++;
    }
    if (flag == 0)
      puts("Yes");
  }
  else
    puts("No");
}
