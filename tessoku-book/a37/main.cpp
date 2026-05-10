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

    ll N, M, B;
    cin >> N >> M >> B;

    ll A = 0, C = 0;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        A += a;
    }
    for (int i = 0; i < M; i++)
    {
        int c;
        cin >> c;
        C += c;
    }

    cout << A * M + B * N * M + C * N << endl;
}
