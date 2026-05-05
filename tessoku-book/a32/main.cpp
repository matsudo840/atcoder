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
    int N, A, B;
    cin >> N >> A >> B;

    vector<string> dp(N + 9); // 先手勝ちなら"First", 先手負けなら"Second"
    dp.at(0) = "Second";      // 初期状態で山が0だったら先手負け

    for (int i = 1; i <= N; i++)
    {
        if (i - A >= 0 && dp.at(i - A) == "Second")
            dp.at(i) = "First";
        else if (i - B >= 0 && dp.at(i - B) == "Second")
            dp.at(i) = "First";
        else
            dp.at(i) = "Second";
    }

    cout << dp.at(N) << endl;
}
