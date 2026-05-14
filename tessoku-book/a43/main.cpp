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
    int N, L;
    cin >> N >> L;

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int A;
        char B;
        cin >> A >> B;

        if (B == 'W')
            ans = max(ans, A);
        else
            ans = max(ans, L - A);
    }

    cout << ans << endl;
}
