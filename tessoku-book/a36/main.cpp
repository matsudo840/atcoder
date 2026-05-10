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
    int N, K;
    cin >> N >> K;

    if ((K - (N - 1) * 2) < 0)
        cout << "No" << endl;
    else if ((K - (N - 1) * 2) % 2 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
