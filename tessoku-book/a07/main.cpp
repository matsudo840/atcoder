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
    int D, N;
    cin >> D >> N;

    vector<int> vec(100009);
    int L, R;
    for (int i = 1; i <= N; i++)
    {
        cin >> L >> R;
        vec.at(L) += 1;
        vec.at(R + 1) -= 1;
    }

    vector<int> attendee(100009);
    for (int i = 1; i <= D; i++)
    {
        attendee.at(i) = attendee.at(i - 1) + vec.at(i);
        cout << attendee.at(i) << endl;
    }
}
