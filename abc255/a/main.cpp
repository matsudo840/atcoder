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
    int R, C;
    cin >> R >> C;

    // int型の2次元配列(3×4要素の)の宣言
    vector<vector<int>> data(2, vector<int>(2));

    // 入力 (2重ループを用いる)
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> data.at(i).at(j);
        }
    }

    cout << data.at(R - 1).at(C - 1) << endl;
}
