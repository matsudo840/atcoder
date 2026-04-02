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

    rep(i, N)
    {
        int H;
        cin >> H;

        M -= H;
        if (M < 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << N << endl;
}
