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

    vector<pair<int, int>> LR;
    for (int i = 0; i < N; i++)
    {
        int l, r;
        cin >> l >> r;
        LR.push_back(make_pair(r, l));
    }
    sort(LR.begin(), LR.end());

    int ans = 0;
    int current_time = 0;
    for (pair<int, int> p : LR)
    {
        if (current_time <= p.second)
        {
            ans++;
            current_time = p.first;
        }
    }

    cout << ans << endl;
}
