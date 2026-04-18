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
    int N, K;
    cin >> N >> K;

    vector<int> A(N), B(N), C(N), D(N);
    for (int i = 0; i < N; i++)
        cin >> A.at(i);
    for (int i = 0; i < N; i++)
        cin >> B.at(i);
    for (int i = 0; i < N; i++)
        cin >> C.at(i);
    for (int i = 0; i < N; i++)
        cin >> D.at(i);

    vector<int> AB, CD;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            AB.push_back(A.at(i) + B.at(j));
            CD.push_back(C.at(i) + D.at(j));
        }
    }

    sort(all(CD));

    string ans = "No";
    for (int i = 0; i < AB.size(); i++)
    {
        auto itr = lower_bound(CD.begin(), CD.end(), K - AB.at(i));
        if (itr != CD.end() && AB.at(i) + *itr == K)
            ans = "Yes";
    }

    cout << ans << endl;
}
