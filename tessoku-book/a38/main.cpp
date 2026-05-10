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
    int D, N;
    cin >> D >> N;

    vector<int> days(366); // 1-indexed, 0は使わない。
    for (int i = 1; i <= D; i++)
        days.at(i) = 24;

    for (int i = 1; i <= N; i++)
    {
        int L, R, H;
        cin >> L >> R >> H;
        for (int j = L; j <= R; j++)
            days.at(j) = min(days.at(j), H);
    }

    int ans = 0;
    for (int i = 1; i <= D; i++)
        ans += days.at(i);
    cout << ans << endl;
}
