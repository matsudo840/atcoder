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
  int N, Y;
  cin >> N >> Y;

  for (int i = 0; i <= N; i++)
  {
    for (int j = 0; j <= N - i; j++)
    {
      if (i * 10000 + j * 5000 + (N - i - j) * 1000 == Y)
      {
        cout << i << ' ' << j << ' ' << (N - i - j) << endl;
        return 0;
      }
    }
  }

  cout << "-1 -1 -1" << endl;
}
