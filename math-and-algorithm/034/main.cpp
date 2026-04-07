#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

// aよりもbが小さいならばaをbで更新する
// (更新されたならばtrueを返す)
template <typename T>
bool chmin(T &a, const T &b)
{
    if (a > b)
    {
        a = b; // aをbで更新
        return true;
    }
    return false;
}

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> XY(N);
    rep(i, N) cin >> XY.at(i).first >> XY.at(i).second;

    ll dist = 1'000'000'000'000'000'000;
    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++)
        {
            {
                ll d = pow(XY.at(i).first - XY.at(j).first, 2) + pow(XY.at(i).second - XY.at(j).second, 2);
                chmin(dist, d);
            }
        }

    cout << fixed << setprecision(15) << sqrt(dist) << endl;
}
