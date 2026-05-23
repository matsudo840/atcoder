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

    map<string, int> M;
    for (int i = 1; i <= Q; i++)
    {
        int q;
        cin >> q;

        if (q == 1)
        {
            string x;
            int y;
            cin >> x >> y;
            M[x] = y;
        }
        if (q == 2)
        {
            string x;
            cin >> x;
            cout << M[x] << endl;
        }
    }
}
