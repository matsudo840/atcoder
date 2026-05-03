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
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        string ans = "Yes";
        int X;
        cin >> X;

        int x = sqrt(X);

        for (int j = 2; j <= x; j++)
        {
            if (X % j == 0)
                ans = "No";
        }
        cout << ans << endl;
    }
}
