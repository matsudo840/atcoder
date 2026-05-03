#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint1000000007;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

ll power(ll a, ll b)
{
    ll res = 1;
    a %= 1000000007; // 必要に応じてMODをとる
    while (b > 0)
    {
        if (b % 2 == 1)
            res = (res * a) % 1000000007;
        a = (a * a) % 1000000007;
        b /= 2;
    }
    return res;
}

int main()
{
    ll a, b;
    cin >> a >> b;

    cout << power(a, b) << endl;
}
