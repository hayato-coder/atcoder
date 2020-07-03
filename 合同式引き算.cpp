ll modsub(ll a, ll b) {
  ll ans = (a - b) % MOD;
  if (ans < 0)
    ans += MOD;
  return ans;
}
