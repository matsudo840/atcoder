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

  vector<tuple<int, int>> data(N);
  rep(i, N)
  {
    int a, b;
    cin >> a >> b;
    data.at(i) = make_tuple(b, a);
  }

  sort(data.begin(), data.end());

  rep(i, N)
  {
    int a, b;
    tie(b, a) = data.at(i);
    cout << a << " " << b << endl;
  }

  return 0;
}
