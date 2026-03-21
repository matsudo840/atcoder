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

  string result = "NO";

  // ここから記述
  vector<int> data(5);
  for (int i = 0; i < 5; i++)
  {
    cin >> data.at(i);
  }

  rep(i, 4)
  {
    if (data.at(i) == data.at(i + 1))
    {
      result = "YES";
    }
  }

  cout << result << endl;

  return 0;
}
