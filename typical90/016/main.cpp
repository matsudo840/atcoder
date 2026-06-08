#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

ll N, A, B, C;

int main()
{
    cin >> N >> A >> B >> C;

    int ans = 10000;
    for (int i = 0; i <= 9999; i++)
    {
        for (int j = 0; j <= 9999 - i; j++)
        {
            ll tmp = N - A * i - B * j;
            if (tmp % C == 0 && tmp >= 0)
            {
                int k = tmp / C;
                ans = min(ans, i + j + k);
            }
        }
    }
    cout << ans << endl;
}
