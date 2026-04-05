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
    int A = 0;
    int B = 0;

    rep(i, 9)
    {
        int a;
        cin >> a;
        A += a;
    }

    rep(i, 8)
    {
        int b;
        cin >> b;
        B += b;
    }

    cout << A - B + 1 << endl;
}
