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
    int H, W, N;
    cin >> H >> W >> N;

    vector<vector<int>> data(1509, vector<int>(1509));

    int A, B, C, D;
    rep(i, N)
    {
        cin >> A >> B >> C >> D;
        data.at(A).at(B) += 1;
        data.at(A).at(D + 1) -= 1;
        data.at(C + 1).at(B) -= 1;
        data.at(C + 1).at(D + 1) += 1;
    }

    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            data.at(i).at(j) += data.at(i).at(j - 1);
        }
    }

    for (int j = 1; j <= W; j++)
    {
        for (int i = 1; i <= H; i++)
        {
            data.at(i).at(j) += data.at(i - 1).at(j);
        }
    }

    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            cout << data.at(i).at(j);
            if (j != W)
                cout << ' ';
        }
        cout << endl;
    }
}
