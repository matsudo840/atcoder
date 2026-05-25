#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int N, Q;
vector<int> A(100009), X(100009), Y(100009);
vector<vector<int>> dp(32, vector<int>(100009));

int main()
{
    // 入力
    cin >> N >> Q;
    for (int i = 1; i <= N; i++)
        cin >> A.at(i);
    for (int j = 1; j <= Q; j++)
        cin >> X.at(j) >> Y.at(j);

    // 前計算
    for (int i = 1; i <= N; i++)
        dp.at(0).at(i) = A.at(i);
    for (int d = 1; d <= 29; d++)
    {
        for (int i = 1; i <= N; i++)
            dp.at(d).at(i) = dp.at(d - 1).at(dp.at(d - 1).at(i));
    }

    // クエリの処理
    for (int j = 1; j <= Q; j++)
    {
        int CurrentPlace = X.at(j);
        for (int d = 29; d >= 0; d--)
        {
            if ((Y.at(j) / (1 << d)) % 2 != 0)
                CurrentPlace = dp.at(d).at(CurrentPlace);
        }
        cout << CurrentPlace << endl;
    }
}
