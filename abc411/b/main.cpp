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

    vector<int> D(N + 9);
    for (int i = 1; i <= N - 1; i++)
        cin >> D.at(i);

    for (int i = 1; i <= N - 1; i++)
    {
        int ans = 0;
        for (int j = 1; j <= N - i; j++)
        {
            ans += D.at(i + j - 1);
            if (j != 1)
                cout << " ";
            cout << ans;
        }
        cout << endl;
    }
}
