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
    int N, S;
    cin >> N >> S;

    vector<int> A(N);
    rep(i, N) cin >> A.at(i);

    set<int> myset;
    myset.insert(0);

    string ans = "No";
    for (int i = 0; i < N; i++)
    {
        set<int> myset2;
        for (const auto &element : myset)
        {
            myset2.insert(element);

            if (element + A.at(i) < S)
                myset2.insert(element + A.at(i));

            if (element + A.at(i) == S)
            {
                cout << "Yes" << endl;
                return (0);
            }
        }
        myset = myset2;
    }
    cout << "No" << endl;
}
