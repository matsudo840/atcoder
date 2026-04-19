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

    set<int> F;

    string ans1 = "Yes";
    for (int i = 0; i < N; i++)
    {
        int f;
        cin >> f;

        if (F.count(f))
            ans1 = "No";

        F.insert(f);
    }

    string ans2 = "Yes";
    for (int i = 1; i <= M; i++)
    {
        if (!F.count(i))
            ans2 = "No";
    }

    cout << ans1 << endl;
    cout << ans2 << endl;
}
