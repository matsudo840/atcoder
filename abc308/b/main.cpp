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

    vector<string> C(N + 9);
    vector<string> D(M + 9);
    vector<int> P(M + 9);

    for (int i = 1; i <= N; i++)
        cin >> C.at(i);
    for (int i = 1; i <= M; i++)
        cin >> D.at(i);
    for (int i = 0; i <= M; i++)
        cin >> P.at(i);

    map<string, int> price;
    for (int i = 1; i <= M; i++)
        price[D.at(i)] = P.at(i);

    int d = P.at(0);
    int ans = 0;
    for (int i = 1; i <= N; i++)
    {
        if (price.count(C.at(i)))
            ans += price.at(C.at(i));
        else
            ans += d;
    }
    cout << ans << endl;
}
