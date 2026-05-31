#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int N, M;
vector<vector<int>> G(100009);

int main()
{

    cin >> N >> M;

    for (int i = 1; i <= M; i++)
    {
        int a, b;
        cin >> a >> b;
        G.at(a).push_back(b);
        G.at(b).push_back(a);
    }

    for (int i = 1; i <= N; i++)
    {
        cout << i << ": {";
        for (int j = 0; j < G.at(i).size(); j++)
        {
            if (j != 0)
                cout << ", ";
            cout << G.at(i).at(j);
        }
        cout << "}" << endl;
    }
}
