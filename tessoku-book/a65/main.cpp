#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int N;
vector<int> A(100009), dp(100009);
vector<vector<int>> G(100009);

int main()
{
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        cin >> A.at(i);
        G.at(A.at(i)).push_back(i);
    }

    for (int i = N; i >= 1; i--)
    {
        dp.at(i) = 0;
        for (int j = 0; j < G.at(i).size(); j++)
            dp.at(i) += (dp.at(G.at(i).at(j)) + 1);
    }
    for (int i = 1; i <= N; i++)
    {
        if (i >= 2)
            cout << " ";
        cout << dp.at(i);
    }
    cout << endl;
}
