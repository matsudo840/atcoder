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
    int N;
    cin >> N;

    string S;
    cin >> S;

    string ans = "No";
    for (int i = 0; i < N - 2; i++)
    {
        if (S.at(i) == S.at(i + 1) && S.at(i) == S.at(i + 2))
            ans = "Yes";
    }
    cout << ans << endl;
}
