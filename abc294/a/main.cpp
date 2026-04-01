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

    int A;
    vector<int> ans;
    for (int i = 1; i <= N; i++)
    {
        cin >> A;
        if (A % 2 == 0)
            ans.push_back(A);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        if (i != 0)
            cout << " ";
        cout << ans.at(i);
    }
    cout << endl;
}
