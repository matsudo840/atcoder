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

    int H;
    cin >> H;

    for (int i = 2; i <= N; i++)
    {
        int h;
        cin >> h;

        if (h > H)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
