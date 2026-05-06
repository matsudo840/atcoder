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
    for (int i = 0; i < N; i++)
        cin >> A.at(i);

    for (int i = 0; i < N - 1; i++)
    {
        bool turn; // true: 太郎の手番, false: 次郎の手番
        if ((N - i) % 2 == 0)
            turn = true;
        else
            turn = false;

        vector<int> A_tmp;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (turn == true)
                A_tmp.push_back(max(A.at(j), A.at(j + 1)));
            else
                A_tmp.push_back(min(A.at(j), A.at(j + 1)));
        }

        copy(begin(A_tmp), end(A_tmp), begin(A)); // 配列Aを配列A_tmpで上書き
    }

    cout << A[0] << endl;
}
