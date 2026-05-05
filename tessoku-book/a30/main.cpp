#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint1000000007;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main()
{
    int n, r;
    cin >> n >> r;

    mint ans = 1;
    for (int i = n - r + 1; i <= n; i++)
        ans *= i;

    for (int i = 1; i <= r; i++)
        ans /= i;

    cout << ans.val() << endl;
}
