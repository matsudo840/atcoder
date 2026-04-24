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

    vector<int> P(N + 9), A(N + 9);
    for (int i = 1; i <= N; i++)
        cin >> P.at(i) >> A.at(i);

    // dp.at(i).at(j) := 左端がi、右端がjの状態で得られる最高得点
    vector<vector<int>> dp(N + 9, vector<int>(N + 9));
    for (int i = 1; i <= N; i++)
    {
        for (int j = N; j >= 1; j--)
        {

            if (i > j)
                continue;

            if (i < P.at(i) && P.at(i) <= j)
                dp.at(i + 1).at(j) = max(dp.at(i + 1).at(j), dp.at(i).at(j) + A.at(i));
            else
                dp.at(i + 1).at(j) = max(dp.at(i + 1).at(j), dp.at(i).at(j));

            if (i <= P.at(j) && P.at(j) < j)
                dp.at(i).at(j - 1) = max(dp.at(i).at(j - 1), dp.at(i).at(j) + A.at(j));
            else
                dp.at(i).at(j - 1) = max(dp.at(i).at(j - 1), dp.at(i).at(j));
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; i++)
        ans = max(ans, dp.at(i).at(i));
    cout << ans << endl;
}
