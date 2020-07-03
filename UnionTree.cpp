struct unionfind {
    vector<int> par;
    vector<int> rank;
    vector<int> number;
    unionfind(int N) : par(N), rank(N), number(N) {
        for(int i = 0; i < N; i++) {
          par[i] = i;
          rank[i] = 1;
          number[i] = 1;
        }
    }

    int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        if (rank[rx] < rank[ry]) {
          par[rx] = ry;
          number[ry] += number[rx];
        } else {
          par[ry] = rx;
          number[rx] += number[ry];
          if (rank[rx] == rank[ry])
            rank[rx]++;
        }
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }

    int size(int x) {
      return rank[root(x)];
    }

    int size2(int x) {
      return number[root(x)];
    }
};
