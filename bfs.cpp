vector<vector<int> > v(N);
queue<int> que;
rep(i, M) {
  int A, B;
  cin >> A >> B;
  A--;
  B--;
  v[B].pb(A);
  v[A].pb(B);
}

// rep (i, v.size()) {
//   rep(j, v[i].size()) {
//     cout << v[i][j] << ' ';
//   }
//   cout << endl;
// }

int p = 0;
int cnt = N-1;
vector<int> ans(N);
vector<bool> seen(N, true);
que.push(p);
while (!que.empty()) {
  p = que.front();
  que.pop();
  for (int i = 0; i < v[p].size(); i++) {
    int t = v[p][i];
    if (seen[t] == true) {
      que.push(t);
      seen[t] = false;
      ans[t] = p;
      cnt--;
    }
  }
}
