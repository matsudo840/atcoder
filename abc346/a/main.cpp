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

    vector<int> A(N);
    rep(i, N) cin >> A.at(i);

    rep(i, N - 1)
    {
        if (i != 0)
        {
            cout << " ";
        }
        cout << A.at(i) * A.at(i + 1);
    }
    cout << endl;
}
