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
    int H, W;
    cin >> H >> W;

    vector<string> M(H);

    for (int i = 0; i < H; i++)
        cin >> M.at(i);

    vector<vector<ll>> ans(H, vector<ll>(W));
    ans.at(0).at(0) = 1;

    // 入力 (2重ループを用いる)
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (i != H - 1 && M.at(i + 1).at(j) == '.')
                ans.at(i + 1).at(j) += ans.at(i).at(j);
            if (j != W - 1 && M.at(i).at(j + 1) == '.')
                ans.at(i).at(j + 1) += ans.at(i).at(j);
        }
    }
    cout << ans.at(H - 1).at(W - 1) << endl;
}
