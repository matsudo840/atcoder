#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

ll a;
int b, c;

ll pow(int x, int y)
{
    ll t = 1;
    for (int i = 1; i <= y; i++)
    {
        t *= x;
    }
    return t;
}

int main()
{
    cin >> a >> b >> c;

    if (a < pow(c, b))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
