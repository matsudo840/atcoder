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
    int N, M;
    cin >> N >> M;

    vector<int> A(M + 9);
    for (int i = 1; i <= M; i++)
    {
        int p = (1 << N - 1);
        for (int j = 1; j <= N; j++)
        {
            int a_in;
            cin >> a_in;
            A.at(i) += a_in * p;
            p /= 2;
        }
    }

    vector<vector<int>> dp(M + 1, vector<int>(1 << N));

    for (int i = 0; i < M + 1; i++)
        for (int j = 0; j < (1 << N); j++)
            dp.at(i).at(j) = 1'000'000'000;

    dp.at(0).at(0) = 0;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < (1 << N); j++)
        {
            // クーポンi+1を使わないパターン
            dp.at(i + 1).at(j) = min(dp.at(i + 1).at(j), dp.at(i).at(j));

            // クーポンi+1を使うパターン
            dp.at(i + 1).at(j | A.at(i + 1)) = min(dp.at(i + 1).at(j | A.at(i + 1)), dp.at(i).at(j) + 1);
        }
    }

    if (dp.at(M).at((1 << N) - 1) == 1'000'000'000)
        cout << -1 << endl;
    else
        cout << dp.at(M).at((1 << N) - 1) << endl;
}
