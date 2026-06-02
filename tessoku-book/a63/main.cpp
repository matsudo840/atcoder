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
vector<int> A(100009), B(100009), dist(100009);
vector<vector<int>> G(100009);
queue<int> Q;

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

    // BFS
    for (int i = 1; i <= N; i++)
        dist.at(i) = -1; // dist.at(i)=-1 で初期化
    Q.push(1);
    dist.at(1) = 0;
    while (!Q.empty())
    {
        int pos = Q.front();
        Q.pop();
        for (int i = 0; i < G.at(pos).size(); i++)
        {
            int to = G.at(pos).at(i);
            if (dist.at(to) == -1)
            {
                dist.at(to) = dist.at(pos) + 1;
                Q.push(to);
            }
        }
    }

    // 出力
    for (int i = 1; i <= N; i++)
        cout << dist.at(i) << endl;
}
