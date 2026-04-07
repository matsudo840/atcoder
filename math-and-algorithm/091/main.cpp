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
    int N, X;
    cin >> N >> X;

    int ans = 0;
    for (int a = 1; a <= N; a++)
        for (int b = a + 1; b <= N; b++)
            for (int c = b + 1; c <= N; c++)
            {
                {
                    {
                        if (a + b + c == X)
                            ans++;
                    }
                }
            }

    cout << ans << endl;
}
