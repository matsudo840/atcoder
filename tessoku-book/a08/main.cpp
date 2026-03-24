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
    vector<vector<int>> data(1509, vector<int>(1509));

    int H, W, X;
    cin >> H >> W;
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            cin >> X;
            data.at(i).at(j) = data.at(i - 1).at(j) + data.at(i).at(j - 1) - data.at(i - 1).at(j - 1) + X;
        }
    }

    int Q;
    cin >> Q;
    int A, B, C, D;
    rep(i, Q)
    {
        cin >> A >> B >> C >> D;
        cout << data.at(C).at(D) - data.at(A - 1).at(D) - data.at(C).at(B - 1) + data.at(A - 1).at(B - 1) << endl;
    }
}
