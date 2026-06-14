#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

ll N, K;
vector<int> A(1009), B(1009);

int main()
{
    cin >> N >> K;

    for (int i = 1; i <= N; i++)
        cin >> A.at(i);
    for (int i = 1; i <= N; i++)
        cin >> B.at(i);

    ll cnt = 0;
    for (int i = 1; i <= N; i++)
        cnt += abs(A.at(i) - B.at(i));

    if (K >= cnt && (K - cnt) % 2 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
