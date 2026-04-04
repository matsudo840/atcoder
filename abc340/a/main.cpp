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
    int A, B, D;
    cin >> A >> B >> D;

    for (int i = A; i <= B; i += D)
    {
        if (i != A)
            cout << " ";
        cout << i;
    }
    cout << endl;
}
