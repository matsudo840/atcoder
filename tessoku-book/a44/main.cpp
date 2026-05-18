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
    int N, Q;
    int state = 0; // 0: 初期状態、 1: reverseされた状態
    cin >> N >> Q;

    vector<int> A(N); // 0-indexed, A_iにアクセスしたいときはA.at(i-1)
    for (int i = 0; i < N; i++)
    {
        A.at(i) = i + 1; // 配列の初期化
    }

    for (int i = 1; i <= Q; i++)
    {
        int q;
        cin >> q;

        if (q == 1)
        {
            int x, y;
            cin >> x >> y;
            if (state == 0)
                A.at(x - 1) = y;
            else
                A.at(N - x) = y;
        }

        if (q == 2)
            state = 1 - state;

        if (q == 3)
        {
            int x;
            cin >> x;

            if (state == 0)
                cout << A.at(x - 1) << endl;
            else
                cout << A.at(N - x) << endl;
        }
    }
}
