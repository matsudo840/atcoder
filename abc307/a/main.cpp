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

    vector<int> A(N * 7);
    rep(i, N * 7) cin >> A.at(i);

    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        for (int j = 0; j < 7; j++)
            sum += A.at(i * 7 + j);
        if (i != 0)
            cout << " ";
        cout << sum;
    }
    cout << endl;
}
