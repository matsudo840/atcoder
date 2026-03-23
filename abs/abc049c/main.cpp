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
  string S;
  cin >> S;

  reverse(all(S));

  while (S.size() > 0)
  {
    if (S.substr(0, 5) == "maerd")
      S.erase(0, 5);
    else if (S.substr(0, 7) == "remaerd")
      S.erase(0, 7);
    else if (S.substr(0, 5) == "esare")
      S.erase(0, 5);
    else if (S.substr(0, 6) == "resare")
      S.erase(0, 6);
    else
    {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
}
