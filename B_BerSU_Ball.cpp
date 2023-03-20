#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  vector<int> b;
  vector<int> g;

  cin >> n;
  b.reserve(n);

  int x;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    b.push_back(x);
  }

  cin >> m;
  g.reserve(m);
  for (int i = 0; i < m; ++i) {
    cin >> x;
    g.push_back(x);
  }
  std::sort(b.begin(), b.end());
  std::sort(g.begin(), g.end());

  int s = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (b[i] == g[j] || b[i] == g[j] - 1 || b[i] == g[j] + 1) {
        g[j] = -2;
        ++s;
        break;
      }
    }
  }

  cout << s;
}