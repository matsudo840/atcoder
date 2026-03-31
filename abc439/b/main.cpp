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
    string N;
    cin >> N;

    set<int> S;

    while (true)
    {
        int t = 0;
        for (int i = 0; i < N.size(); i++)
        {
            int n = int(N.at(i) - '0');
            t += n * n;
        }

        if (t == 1)
        {
            cout << "Yes" << endl;
            return 0;
        }
        else if (S.count(t))
        {
            cout << "No" << endl;
            return 0;
        }
        else
        {
            S.insert(t);
            N = to_string(t);
        }
    }
}
