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

    vector<int> A(100009);
    vector<int> SL(100009);
    vector<int> SR(100009);

    for (int i = 1; i <= N; i++)
    {
        cin >> A.at(i);
    }
    for (int i = 1; i <= N; i++)
    {
        SL.at(i) = max(SL.at(i - 1), A.at(i));
    }
    for (int i = N; i >= 1; i--)
    {
        SR.at(i) = max(SR.at(i + 1), A.at(i));
    }

    int D, L, R;
    cin >> D;
    rep(i, D)
    {
        cin >> L >> R;
        cout << max(SL.at(L - 1), SR.at(R + 1)) << endl;
    }
}
