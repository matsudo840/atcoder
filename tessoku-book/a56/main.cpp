#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

// 入力で与えられる変数
int N, Q;
string S;
vector<ll> a(200009), b(200009), c(200009), d(200009);

// ハッシュ値を計算するための変数
ll mod = 214783647;
vector<ll> T(200009), H(200009), Power100(200009);

// S[l, r]のハッシュ値を返す関数
ll Hash_value(int l, int r)
{
    ll val = H.at(r) - (H.at(l - 1) * Power100.at(r - l + 1) % mod);
    if (val < 0)
        val += mod;
    return val;
}

int main()
{
    // 入力
    cin >> N >> Q;
    cin >> S;
    for (int i = 1; i <= Q; i++)
        cin >> a.at(i) >> b.at(i) >> c.at(i) >> d.at(i);

    // 文字を数値に変換
    for (int i = 1; i <= N; i++)
        T.at(i) = (S.at(i - 1) - 'a') + 1;

    // 100のn乗を前計算する
    Power100.at(0) = 1;
    for (int i = 1; i <= N; i++)
        Power100.at(i) = 100LL * Power100.at(i - 1) % mod;

    // H[1], H[2], ... , H[N]を計算する
    H.at(0) = 0;
    for (int i = 1; i <= N; i++)
        H.at(i) = (100LL * H.at(i - 1) + T.at(i)) % mod;

    // クエリに答える
    for (int i = 1; i <= Q; i++)
    {
        ll Hash1 = Hash_value(a.at(i), b.at(i));
        ll Hash2 = Hash_value(c.at(i), d.at(i));
        if (Hash1 == Hash2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
