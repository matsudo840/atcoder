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

  map<int, int> r;

  int A;
  rep(i, N)
  {
    cin >> A;
    if (r.count(A))
    {
      r[A] += 1;
    }
    else
    {
      r[A] = 1;
    }
  }

  int rk = 0, rv = 0;
  for (auto p : r)
  {
    int k = p.first, v = p.second;
    if (rv < v)
    {
      rk = k;
      rv = v;
    }
  }

  cout << rk << ' ' << rv << endl;

  return 0;
}
