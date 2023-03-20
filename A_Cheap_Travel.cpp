#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n, a, b;
  cin >> m >> n >> a >> b;
  float t = (float) b / n;
  if (t > a) {
    cout << m * a;
    return 0;
  }
  
  std::cout << (m / n) * b + min((m % n) * a, b);
}