#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

class SegmentTree
{
public:
    vector<int> dat;
    int siz = 1;

    // 要素 dat の初期化を行う（最初は全部ゼロ）
    void init(int N)
    {
        siz = 1;
        while (siz < N)
            siz *= 2;
        dat.assign(siz * 2, 0);
    }

    // クエリ 1 に対する処理
    void update(int pos, int x)
    {
        pos = pos + siz - 1;
        dat.at(pos) = x;
        while (pos >= 2)
        {
            pos /= 2;
            dat.at(pos) = dat.at(pos * 2) + dat.at(pos * 2 + 1);
        }
    }

    // クエリ 2 に対する処理
    // u は現在のセル番号、[a, b) はセルに対応する半開区間、[l, r) は求めたい半開区間
    int query(int l, int r, int a, int b, int u)
    {
        if (r <= a || b <= l)
            return 0;
        if (l <= a && b <= r)
            return dat.at(u); // 完全に含まれる場合
        int m = (a + b) / 2;
        int AnswerL = query(l, r, a, m, u * 2);
        int AnswerR = query(l, r, m, b, u * 2 + 1);
        return AnswerL + AnswerR;
    }
};

int N, Q;
vector<int> Query, pos, x, l, r;
SegmentTree Z;

int main()
{
    // 入力
    cin >> N >> Q;

    Query.resize(Q + 1);
    pos.resize(Q + 1);
    x.resize(Q + 1);
    l.resize(Q + 1);
    r.resize(Q + 1);

    for (int i = 1; i <= Q; i++)
    {
        cin >> Query.at(i);
        if (Query.at(i) == 1)
            cin >> pos.at(i) >> x.at(i);
        if (Query.at(i) == 2)
            cin >> l.at(i) >> r.at(i);
    }

    // クエリ処理
    Z.init(N);
    for (int i = 1; i <= Q; i++)
    {
        if (Query.at(i) == 1)
        {
            Z.update(pos.at(i), x.at(i));
        }
        if (Query.at(i) == 2)
        {
            // 最初のセルに対応する半開区間は [1, siz + 1)
            int Answer = Z.query(l.at(i), r.at(i), 1, 1 + Z.siz, 1);
            cout << Answer << endl;
        }
    }
    return 0;
}
