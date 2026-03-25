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
    int N, X;
    cin >> N >> X;

    vector<int> A(100009);
    for (int i = 1; i <= N; i++)
        cin >> A.at(i);

    int L = 1, R = N;
    int M;

    while (A.at(M) != X)
    {
        M = (L + R) / 2;
        if (A.at(M) < X)
            L = M + 1;
        else if (A.at(M) == X)
            break;
        else if (A.at(M) > X)
            R = M - 1;
    }

    cout << M << endl;
}
