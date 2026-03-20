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
  double D;
  cin >> D;
  cout << fixed << setprecision(20) << D * D * M_PI / 4 << endl;

  return 0;
}
