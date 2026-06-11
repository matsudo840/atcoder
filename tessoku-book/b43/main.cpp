#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int N, M;
vector<int> A(200009);

int main()
{
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
        A.at(i) = 0;
    for (int i = 1; i <= M; i++)
    {
        int a;
        cin >> a;
        A.at(a)++;
    }

    for (int i = 1; i <= N; i++)
        cout << M - A.at(i) << endl;
}
