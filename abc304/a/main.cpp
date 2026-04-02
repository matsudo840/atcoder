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

    int start_pos = 0;
    int start_age = 1000000009;

    vector<string> S(N);

    rep(i, N)
    {
        string s;
        int a;
        cin >> s >> a;

        S.at(i) = s;
        if (a < start_age)
        {
            start_pos = i;
            start_age = a;
        }
    }

    for (int i = 0; i < N; i++)
    {
        int p = (start_pos + i) % N;
        cout << S.at(p) << endl;
    }
}
