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
    bool flg = false;

    int N, X;
    cin >> N >> X;

    rep(i, N)
    {
        int a;
        cin >> a;

        if (a == X)
            flg = true;
    }

    if (flg)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
