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
    int N, W;
    cin >> N >> W;

    vector<ll> w(N + 1), v(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> w.at(i) >> v.at(i);

    // dp.at(n).at(w) := 1~nのアイテムを使った時に実現できる、重さw以下の最大価値v
    vector<vector<ll>> dp(N + 1, vector<ll>(W + 9));

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (j - w.at(i) >= 0)
                dp.at(i).at(j) = max(dp.at(i - 1).at(j - w.at(i)) + v.at(i), dp.at(i - 1).at(j));
            else
                dp.at(i).at(j) = dp.at(i - 1).at(j);
        }
    }
    cout << dp.at(N).at(W) << endl;
}
