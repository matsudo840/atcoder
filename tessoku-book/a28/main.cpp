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
    int N;
    cin >> N;

    ll ans = 0;
    for (int i = 0; i < N; i++)
    {
        char sign;
        int a;
        cin >> sign >> a;

        if (sign == '+')
            ans += a;
        else if (sign == '-')
            ans -= a;
        else if (sign == '*')
            ans *= a;

        cout << ans % 10000 << endl;
        ans %= 1'000'000'000;
    }
}
