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
    string S, T;
    cin >> S >> T;

    // dp.at(i).at(j) := Sのi文字目、Tのj文字目までの最長共通文字列
    vector<vector<int>> dp(S.size() + 9, vector<int>(T.size() + 9));

    for (int i = 1; i <= S.size(); i++)
    {
        for (int j = 1; j <= T.size(); j++)
        {
            if (S.at(i - 1) == T.at(j - 1))
                dp.at(i).at(j) = max({dp.at(i - 1).at(j), dp.at(i).at(j - 1), dp.at(i - 1).at(j - 1) + 1});
            else
                dp.at(i).at(j) = max(dp.at(i - 1).at(j), dp.at(i).at(j - 1));
        }
    }

    cout << dp.at(S.size()).at(T.size()) << endl;
}
