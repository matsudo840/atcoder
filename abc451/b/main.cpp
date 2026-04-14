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

    vector<int> A(N), B(N);
    rep(i, N) cin >> A.at(i) >> B.at(i);

    vector<int> ans(M);

    for (int i = 0; i < N; i++)
    {
        ans.at(A.at(i) - 1)--;
        ans.at(B.at(i) - 1)++;
    }

    for (int i = 0; i < M; i++)
    {
        cout << ans.at(i) << endl;
    }
}
