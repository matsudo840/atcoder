#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

ll comb(int n, int r)
{
    ll ret = 1;
    for (int i = n; i > n - r; i--)
        ret *= i;
    for (int i = r; i > 1; i--)
        ret /= i;
    return ret;
}

int main()
{
    int N;
    cin >> N;

    map<int, int> cnt;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        cnt[A]++;
    }

    ll ans = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (cnt[i] >= 3)
            ans += comb(cnt[i], 3);
    }

    cout << ans << endl;
}
