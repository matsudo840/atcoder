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
    string S, T;
    cin >> S >> T;

    bool result = true;
    if (S.size() > T.size())
        result = false;
    else
    {
        for (int i = 0; i < S.size(); i++)
        {
            if (S.at(i) != T.at(i))
                result = false;
        }
    }

    if (result)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
