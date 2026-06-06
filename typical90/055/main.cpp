#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

ll N, P, Q;
vector<ll> A(109);

int main()
{
    cin >> N >> P >> Q;

    for (int i = 1; i <= N; i++)
    {
        cin >> A.at(i);
        A.at(i) %= P;
    }

    int ans = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            for (int k = j + 1; k <= N; k++)
            {
                for (int l = k + 1; l <= N; l++)
                {
                    for (int m = l + 1; m <= N; m++)
                    {
                        ll t = A.at(i);
                        t *= A.at(j);
                        t %= P;
                        t *= A.at(k);
                        t %= P;
                        t *= A.at(l);
                        t %= P;
                        t *= A.at(m);
                        t %= P;
                        if (t % P == Q)
                            ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;
}
