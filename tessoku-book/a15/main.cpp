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
    vector<int> B(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
        B.at(i) = A.at(i);
    }

    set<int> B_tmp(all(B));
    vector<int> B_uniq(all(B_tmp));
    int s = B_uniq.size() - 1;

    for (int i = 0; i < N; i++)
    {
        int L = 0, R = s;
        int M;
        while (L <= R)
        {
            M = (L + R) / 2;
            if (A.at(i) < B_uniq.at(M))
                R = M - 1;
            if (A.at(i) == B_uniq.at(M))
                break;
            if (A.at(i) > B_uniq.at(M))
                L = M + 1;
        }

        cout << M + 1;
        if (i < N - 1)
            cout << " ";
        else
            cout << endl;
    }
}
