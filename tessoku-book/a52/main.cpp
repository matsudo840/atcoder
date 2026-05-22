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

    queue<string> S;
    for (int i = 1; i <= Q; i++)
    {
        int q;
        cin >> q;

        if (q == 1)
        {
            string s;
            cin >> s;
            S.push(s);
        }
        if (q == 2)
            cout << S.front() << endl;
        if (q == 3)
            S.pop();
    }
}
