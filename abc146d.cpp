#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N;
int a[150000];
int b[150000];
int i, j;
queue<pair<int, int> > que;
pair<int, int> p;

int main() {
  vector<int> v[100005];
  int cnt[100000];
  int c[100000];
  int s = 1;
  cin >> N;
  for (i = 0; i < N; i++) {
    cnt[i] = 0;
    c[i] = 0;
  }
  for (i = 0; i < N-1; i++) {
    cin >> a[i] >> b[i];
    cnt[a[i]-1]++;
    cnt[b[i]-1]++;
    v[a[i]].push_back(i);
    v[b[i]].push_back(i);
  }
  int k = 0;
  for (i = 0; i < N; i++) {
    k = max(k, cnt[i]);
  }
  int color = 1;
  for (i = 0; i < N-1; i++) {
    if (a[i] == s) {
      que.push(make_pair(i, b[i]));
      c[i] = color;
      color++;
    }
  }
  while (!que.empty()) {
    color = 1;
    p = que.front();
    que.pop();
    for (i = 0; i < v[p.second].size(); i++) {
      if (color == c[p.first])
        color++;
      int t = v[p.second][i];
      if (a[t] == p.second && c[t] == 0) {
        que.push(make_pair(t, b[t]));
        c[t] = color;
        color++;
      }
      if (b[t] == p.second && c[t] == 0) {
        que.push(make_pair(i, a[i]));
        c[t] = color;
        color++;
      }
    }
  }
  cout << k << endl;
  for (i = 0; i < N-1; i++)
    cout << c[i] << endl;
}
