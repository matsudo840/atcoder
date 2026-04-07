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

    vector<int> A(N);
    rep(i, N) cin >> A.at(i);

    bool result = false;
    for (int i = 0; i < N - 2; i++)
        for (int j = i + 1; j < N - 1; j++)
            for (int k = j + 1; k < N; k++)
            {
                {
                    {
                        if (A.at(i) + A.at(j) + A.at(k) == 1000)
                            result = true;
                    }
                }
            }

    if (result)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
