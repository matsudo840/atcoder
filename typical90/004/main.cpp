#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int H, W;
vector<vector<int>> A(2009, vector<int>(2009));

vector<int> Hsum(2009), Wsum(2009);

int main()
{
    cin >> H >> W;

    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
            cin >> A.at(i).at(j);
    }

    // 行ごとの合計
    for (int i = 1; i <= H; i++)
    {
        int t = 0;
        for (int j = 1; j <= W; j++)
            t += A.at(i).at(j);
        Hsum.at(i) = t;
    }

    // 列ごとの合計
    for (int i = 1; i <= W; i++)
    {
        int t = 0;
        for (int j = 1; j <= H; j++)
            t += A.at(j).at(i);
        Wsum.at(i) = t;
    }

    // 答えの出力
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (j != 1)
                cout << " ";
            cout << Hsum.at(i) + Wsum.at(j) - A.at(i).at(j);
        }
        cout << endl;
    }
}
