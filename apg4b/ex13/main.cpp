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
  // 入出力の高速化（Pythonの sys.stdin.readline 的なやつ）
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // ここから記述

  int N;
  cin >> N;

  vector<int> vec(N);

  int S = 0;
  rep(i, N)
  {
    cin >> vec.at(i);
    S += vec.at(i);
  };

  int mean = S / N;

  rep(i, N)
  {
    cout << abs(mean - vec.at(i)) << endl;
  };
}
