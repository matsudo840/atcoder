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

    int ans;

    cin >> ans; // A1
    for (int i = 2; i <= N; i++)
    {
        int a;
        cin >> a;
        ans = ans ^ a;
    }

    if (ans != 0)
        cout << "First" << endl; // ニム和が0以外だと先手必勝
    else
        cout << "Second" << endl; // ニム和が0だと後手必勝
}
