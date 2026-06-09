#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

// 10^18
const long long INF = 1e18;

ll A, B;

int main()
{
    cin >> A >> B;
    ll L = gcd(A, B);

    if (A / L > INF / B)
        cout << "Large" << endl;
    else
        cout << L * (A / L) * (B / L) << endl;
}
