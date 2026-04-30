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

    int N, X, Y;
    cin >> N >> X >> Y;

    int ans = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % X == 0 || i % Y == 0)
            ans++;
    }

    cout << ans << endl;
}
