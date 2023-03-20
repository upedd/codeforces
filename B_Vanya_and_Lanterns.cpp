#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

using ll = long long;

int main() {
    ll n, l;
    cin >> n >> l;
    vector<ll> v;
    v.reserve(n);

    for (ll i = 0; i < n; i++) {
        ll t;
        cin >> t;
        v.push_back(t);
    }
    std::sort(v.begin(), v.end());

    double max_distance = 0;
    if (v[0] != 0) {
        if (max_distance < v[0]) {
            max_distance = v[0];
        }
    }

    for (ll i = 0; i < n - 1; ++i) {
        double d = (v[i + 1] - v[i]) / 2.0;
        if (max_distance < d) {
            max_distance = d;
        }
    }

    if (v[n - 1] != l) {
        double d = l - v[n - 1];
        if (max_distance < d) {
            max_distance = d;
        }
    }

    cout << fixed << std::setprecision(10) << max_distance;
}