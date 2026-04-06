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

    vector<pair<int, int>> P(N);

    rep(i, N) { cin >> P.at(i).first >> P.at(i).second; }

    for (int i = 0; i < N; i++)
    {
        int f = 1;
        int dist = 0;
        for (int j = 0; j < N; j++)
        {
            if ((P.at(i).first - P.at(j).first) * (P.at(i).first - P.at(j).first) + (P.at(i).second - P.at(j).second) * (P.at(i).second - P.at(j).second) > dist)
            {
                f = j + 1;
                dist = (P.at(i).first - P.at(j).first) * (P.at(i).first - P.at(j).first) + (P.at(i).second - P.at(j).second) * (P.at(i).second - P.at(j).second);
            }
        }
        cout << f << endl;
    }
}
