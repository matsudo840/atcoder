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
    int N, T, P;
    cin >> N >> T >> P;

    vector<int> L(N);
    rep(i, N) cin >> L.at(i);
    sort(rbegin(L), rend(L));

    cout << max(0, T - L.at(P - 1)) << endl;
}
