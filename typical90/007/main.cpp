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
    cin >> N;

    vector<ll> A(N);
    for (int i = 0; i < N; i++)
        cin >> A.at(i);

    sort(all(A));

    cin >> Q;
    for (int i = 1; i <= Q; i++)
    {
        ll B;
        cin >> B;

        auto it = lower_bound(A.begin(), A.end(), B);

        if (it == A.begin())
            cout << abs(B - *it) << endl;
        else if (it == A.end())
        {
            it--;
            cout << abs(B - *it) << endl;
        }
        else
        {
            auto itt = it - 1;
            cout << min(abs(B - *it), abs(B - *itt)) << endl;
        }
    }
}
