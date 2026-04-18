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
vector<ll> A(10009);

// 答えがx以下であればtrue, そうでなければfalseを返す
bool check(ll x)
{
    ll ans = 0;
    for (int i = 1; i <= N; i++)
        ans += x / A.at(i);

    if (ans >= K)
        return true;
    else
        return false;
}

int main()
{
    cin >> N >> K;

    for (int i = 1; i <= N; i++)
        cin >> A.at(i);

    ll left = 1;
    ll right = 1'000'000'000;

    while (left < right)
    {
        ll mid = (left + right) / 2;
        if (check(mid))
            right = mid;
        else
            left = mid + 1;
    }

    cout << right << endl;
}
