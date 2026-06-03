#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

// 入力・グラフ
int N, M;
vector<int> A(100009), B(100009), C(100009);
vector<vector<pair<int, int>>> G(100009);

// ダイクストラ法
vector<ll> cur(100009);
vector<bool> kakutei(100009);
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

int main()
{
    // 入力
    cin >> N >> M;
    for (int i = 1; i <= M; i++)
    {
        cin >> A.at(i) >> B.at(i) >> C.at(i);
        G.at(A.at(i)).push_back(make_pair(B.at(i), C.at(i)));
        G.at(B.at(i)).push_back(make_pair(A.at(i), C.at(i)));
    }

    // 配列の初期化
    for (int i = 1; i <= N; i++)
        kakutei.at(i) = false;
    for (int i = 1; i <= N; i++)
        cur.at(i) = 2'000'000'000;

    // スタート地点をキューに追加
    cur.at(1) = 0;
    Q.push(make_pair(cur.at(1), 1));

    // ダイクストラ法
    while (!Q.empty())
    {
        // 次に確定させるべき頂点を求める
        int pos = Q.top().second;
        Q.pop();

        // Qの最小要素が「すでに確定した頂点」の場合
        if (kakutei.at(pos) == true)
            continue;

        // cur.at(i)の値を更新する
        kakutei.at(pos) = true;
        for (int i = 0; i < G.at(pos).size(); i++)
        {
            int nex = G.at(pos).at(i).first;
            int cost = G.at(pos).at(i).second;
            if (cur.at(nex) > cur.at(pos) + cost)
            {
                cur.at(nex) = cur.at(pos) + cost;
                Q.push(make_pair(cur.at(nex), nex));
            }
        }
    }

    // 答えを出力
    for (int i = 1; i <= N; i++)
    {
        if (cur.at(i) == 2'000'000'000)
            cout << "-1" << endl;
        else
            cout << cur.at(i) << endl;
    }
}
