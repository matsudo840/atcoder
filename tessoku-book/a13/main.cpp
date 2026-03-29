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

    vector<int> A(N + 9);
    for (int i = 1; i <= N; i++)
        cin >> A.at(i);

    int L = 1;
    ll ans = 0;

    for (int R = 2; R <= N; R++)
    {
        while (A.at(R) - A.at(L) > K && L < R - 1)
            L++;

        if (A.at(R) - A.at(L) <= K)
        {
            ans += R - L;
        }
    }
    cout << ans << endl;
}
