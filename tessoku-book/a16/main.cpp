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

    vector<int> A(N + 9);
    for (int i = 2; i <= N; i++)
        cin >> A.at(i);
    vector<int> B(N + 9);
    for (int i = 3; i <= N; i++)
        cin >> B.at(i);

    vector<int> dp(N + 9);
    dp.at(1) = 0;
    dp.at(2) = dp.at(1) + A.at(2);

    for (int i = 3; i <= N; i++)
    {
        dp.at(i) = min(dp.at(i - 1) + A.at(i), dp.at(i - 2) + B.at(i));
    }

    cout << dp.at(N) << endl;
}
