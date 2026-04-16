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

    vector<int> C1(N + 9), C2(N + 9);

    for (int i = 1; i <= N; i++)
    {
        int C, P;
        cin >> C >> P;

        if (C == 1)
            C1.at(i) = P;
        else
            C2.at(i) = P;
    }

    for (int i = 1; i <= N; i++)
    {
        C1.at(i) += C1.at(i - 1);
        C2.at(i) += C2.at(i - 1);
    }

    int Q;
    cin >> Q;

    for (int i = 1; i <= Q; i++)
    {
        int L, R;
        cin >> L >> R;

        cout << C1.at(R) - C1.at(L - 1) << " " << C2.at(R) - C2.at(L - 1) << endl;
    }
}
