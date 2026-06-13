#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

ll A, B, C;

int main()
{
    cin >> A >> B >> C;
    ll G = gcd(gcd(A, B), C);

    ll ans = 0;
    ans += A / G - 1;
    ans += B / G - 1;
    ans += C / G - 1;

    cout << ans << endl;
}
