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
vector<int> A(100009), B(100009);
vector<vector<int>> G(100009);
vector<bool> visited(100009);

void dfs(int pos)
{ // posは現在位置
    visited.at(pos) = true;
    for (int i = 0; i < G.at(pos).size(); i++)
    {
        int nex = G.at(pos).at(i);
        if (visited.at(nex) == false)
            dfs(nex);
    }
    return;
}

int main()
{
    // 入力
    cin >> N >> M;
    for (int i = 1; i <= M; i++)
    {
        cin >> A.at(i) >> B.at(i);
        G.at(A.at(i)).push_back(B.at(i));
        G.at(B.at(i)).push_back(A.at(i));
    }

    // 深さ優先探索
    for (int i = 1; i <= N; i++)
        visited.at(i) = false;
    dfs(1);

    // 答えの出力
    string Answer = "The graph is connected.";
    for (int i = 1; i <= N; i++)
    {
        if (visited.at(i) == false)
            Answer = "The graph is not connected.";
    }
    cout << Answer << endl;
}
