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
    int A, B, tmp;
    cin >> A >> B;

    while (true)
    {
        // 必ずAが大きくなるようにする
        if (A < B)
        {
            tmp = A;
            A = B;
            B = tmp;
        }

        if (A % B == 0)
        {
            cout << B << endl;
            return 0;
        }

        A -= B;
    }
}
