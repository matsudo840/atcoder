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
    string S;
    cin >> S;

    int ans = 0;
    for (int i = 0; i < S.length(); i++)
    {

        for (int d = 1; d < S.length(); d++)
        {
            if (i + d * 2 >= S.length())
                continue;
            if (S.at(i) == 'A' && S.at(i + d) == 'B' && S.at(i + d * 2) == 'C')
                ans++;
        }
    }
    cout << ans << endl;
}
