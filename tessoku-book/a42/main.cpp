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

    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++)
        cin >> A.at(i) >> B.at(i);

    int ans = 0;

    for (int i = 1; i <= 100 - K; i++)
    {
        for (int j = 1; j <= 100 - K; j++)
        {
            int cnt = 0;
            for (int k = 0; k < N; k++)
            {
                if (A.at(k) >= i && A.at(k) <= i + K &&
                    B.at(k) >= j && B.at(k) <= j + K)
                    cnt++;
            }
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
}
