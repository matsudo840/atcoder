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
    int M, D;
    cin >> M >> D;

    if (M == 1 && D == 7 ||
        M == 3 && D == 3 ||
        M == 5 && D == 5 ||
        M == 7 && D == 7 ||
        M == 9 && D == 9)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
