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
    char C;
    cin >> N >> C;

    string A;
    cin >> A;

    int score = 0;
    for (int i = 0; i < N; i++)
    {
        if (A.at(i) == 'W')
            score += 0;
        if (A.at(i) == 'R')
            score += 1;
        if (A.at(i) == 'B')
            score += 2;
    }

    string ans = "No";
    if ((score % 3 == 0 && C == 'W') || (score % 3 == 1 && C == 'R') || (score % 3 == 2 && C == 'B'))
        ans = "Yes";

    cout << ans << endl;
}
