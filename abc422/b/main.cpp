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

    // int型の2次元配列(3×4要素の)の宣言
    vector<vector<char>> data(H + 9, vector<char>(W + 9));

    // 入力 (2重ループを用いる)
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            cin >> data.at(i).at(j);
        }
    }

    string ans = "Yes";
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (data.at(i).at(j) == '#')
            {
                int cnt = 0;
                if (data.at(i - 1).at(j) == '#')
                    cnt++;
                if (data.at(i).at(j - 1) == '#')
                    cnt++;
                if (data.at(i + 1).at(j) == '#')
                    cnt++;
                if (data.at(i).at(j + 1) == '#')
                    cnt++;
                if (cnt != 2 && cnt != 4)
                    ans = "No";
            }
        }
    }
    cout << ans << endl;
}
