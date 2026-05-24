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

    set<ll> S;

    for (int i = 1; i <= Q; i++)
    {
        int q, x;
        cin >> q >> x;
        if (q == 1)
            S.insert(x);
        if (q == 2)
            S.erase(x);
        if (q == 3)
        {
            auto itr = S.lower_bound(x); // xを超える最小の要素
            if (itr == S.end())
                cout << "-1" << endl;
            else
                cout << (*itr) << endl; // 要素の値を出力
        }
    }
}
