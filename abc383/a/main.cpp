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

    vector<int> T(N);
    vector<int> V(N);
    rep(i, N) cin >> T.at(i) >> V.at(i);

    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        if (i == 0)
            ans = V.at(0);
        else
        {
            if (ans <= T.at(i) - T.at(i - 1))
                ans = V.at(i);
            else
                ans = ans - (T.at(i) - T.at(i - 1)) + V.at(i);
        }
    }
    cout << ans << endl;
}
