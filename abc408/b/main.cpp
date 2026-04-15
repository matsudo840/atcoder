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

    set<int> C;
    for (int i = 0; i < N; i++)
    {
        int c;
        cin >> c;
        C.insert(c);
    }
    cout << C.size() << endl;

    vector<int> v(C.begin(), C.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (i != 0)
            cout << " ";
        cout << v.at(i);
    }
    cout << endl;
}
