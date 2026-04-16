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

    set<string> S;
    vector<int> ans;
    for (int i = 1; i <= N; i++)
    {
        string s;
        cin >> s;

        if (!S.count(s))
        {
            ans.push_back(i);
            S.insert(s);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans.at(i) << endl;
    }
}
