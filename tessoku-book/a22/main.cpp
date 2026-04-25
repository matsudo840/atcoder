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

    vector<int> A(N + 9), B(N + 9);

    for (int i = 1; i <= N - 1; i++)
        cin >> A.at(i);
    for (int i = 1; i <= N - 1; i++)
        cin >> B.at(i);

    vector<int> dp(N + 9);
    for (int i = 1; i <= N - 1; i++)
    {
        if (i == 1 || i >= 2 && dp.at(i) > 0)
        {
            dp.at(A.at(i)) = max(dp.at(A.at(i)), dp.at(i) + 100);
            dp.at(B.at(i)) = max(dp.at(B.at(i)), dp.at(i) + 150);
        }
    }

    cout << dp.at(N) << endl;
}
