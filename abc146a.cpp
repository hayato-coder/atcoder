#include <iostream>
#include <string>
using namespace std;
int main(){
  int ans;
  string s;
  cin >> s;
  if (s == "SUN")
    ans = 7;
  else if (s == "MON")
    ans = 6;
  else if (s == "TUE")
    ans = 5;
  else if (s == "WED")
    ans = 4;
  else if (s == "THU")
    ans = 3;
  else if (s == "FRI")
    ans = 2;
  else
    ans = 1;
  cout << ans << endl;
}
