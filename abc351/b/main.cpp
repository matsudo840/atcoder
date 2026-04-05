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

    // int型の2次元配列(3×4要素の)の宣言
    vector<vector<char>> A(N, vector<char>(N));
    vector<vector<char>> B(N, vector<char>(N));

    // 入力 (2重ループを用いる)
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A.at(i).at(j);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> B.at(i).at(j);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A.at(i).at(j) != B.at(i).at(j))
                cout << i + 1 << " " << j + 1 << endl;
        }
    }
}
