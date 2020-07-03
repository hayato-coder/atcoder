void dfs(int n, vector<int> s, int t) {
  if (n == N) {
    v.pb(s);
  }
  else {
    for (int i = t; i <= M; i++) {
      s.pb(i);
      dfs(n+1, s, s[s.size()-1]);
      s.pop_back();
    }
  }
}
