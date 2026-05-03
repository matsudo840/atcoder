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
    for (int i = 1; i <= N; i++)
        cin >> A.at(i);

    vector<int> dp(100009), L(100009);
    int LEN = 0;

    for (int i = 1; i <= N; i++)
    {
        int pos = lower_bound(L.begin() + 1, L.begin() + LEN + 1, A.at(i)) - L.begin();
        dp.at(i) = pos;

        // 配列Lを更新
        L.at(dp.at(i)) = A.at(i);
        if (dp.at(i) > LEN)
            LEN += 1;
    }

    // 答えを出力
    cout << LEN << endl;
}
