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

    map<char, int> a;
    for (int i = 0; i < S.size(); i++)
    {
        a[S.at(i)]++;
    }

    char ans = 'a';
    for (char c = 'b'; c <= 'z'; ++c)
    {
        if (a[c] > a[ans])
        {
            ans = c;
        }
    }

    cout << ans << endl;
}
