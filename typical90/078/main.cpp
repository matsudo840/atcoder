#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int N, M;
vector<int> G(100009);
int a, b;

int main()
{
    cin >> N >> M;

    for (int i = 0; i < 100009; i++)
        G.at(i) = 0;

    for (int i = 1; i <= M; i++)
    {
        cin >> a >> b;
        G.at(max(a, b))++;
    }

    int ans = 0;
    for (int i = 1; i <= N; i++)
        if (G.at(i) == 1)
            ans++;

    cout << ans << endl;
}
