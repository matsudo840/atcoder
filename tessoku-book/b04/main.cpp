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
    string N;
    cin >> N;

    reverse(all(N));

    int ans = 0;
    int digit = 1;
    for (int i = 0; i < N.size(); i++)
    {
        ans += (N.at(i) - '0') * digit;
        digit *= 2;
    }
    cout << ans << endl;
}
