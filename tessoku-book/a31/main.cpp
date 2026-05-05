#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main()
{
    ll N;
    cin >> N;

    ll ans = 0;
    ans += N / 3;
    ans += N / 5;
    ans -= N / 15;

    cout << ans << endl;
}
