#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

void do_test()
{
    int N;
    cin >> N;

    vector<int> A(N);
    rep(i, N) cin >> A.at(i);

    int result = 0;
    rep(i, N)
    {
        if (A.at(i) % 2 == 1)
            result++;
    }

    cout << result << endl;
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
        do_test();
}
