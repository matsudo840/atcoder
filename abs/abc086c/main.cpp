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

  vector<int> T(N + 1);
  vector<int> X(N + 1);
  vector<int> Y(N + 1);

  T.at(0) = 0;
  X.at(0) = 0;
  Y.at(0) = 0;

  rep(i, N)
  {
    int t, x, y;
    cin >> t >> x >> y;
    T.at(i + 1) = t;
    X.at(i + 1) = x;
    Y.at(i + 1) = y;
  }

  reverse(all(T));
  reverse(all(X));
  reverse(all(Y));

  rep(i, N)
  {
    int t_delta = T.at(i) - T.at(i + 1);
    int x_delta = abs(X.at(i) - X.at(i + 1));
    int y_delta = abs(Y.at(i) - Y.at(i + 1));

    if (!(t_delta >= x_delta + y_delta && t_delta % 2 == (x_delta + y_delta) % 2))
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
