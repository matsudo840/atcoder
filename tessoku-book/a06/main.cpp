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
    cin >> N >> Q;

    vector<int> vec(100009);
    int A;
    for (int i = 1; i <= N; i++)
    {
        cin >> A;

        vec.at(i) = vec.at(i - 1) + A;
    }

    int L, R;
    for (int i = 1; i <= Q; i++)
    {
        cin >> L >> R;
        cout << vec.at(R) - vec.at(L - 1) << endl;
    }
}
