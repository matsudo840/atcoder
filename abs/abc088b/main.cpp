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

  priority_queue<int> pq;

  int N;
  cin >> N;

  rep(i, N)
  {
    int a;
    cin >> a;
    pq.push(a);
  }

  bool a_flg = true;

  int sum_a = 0, sum_b = 0;
  // 空でない間繰り返す
  while (!pq.empty())
  {
    if (a_flg)
    {
      sum_a += pq.top();
      a_flg = false;
    }
    else
    {
      sum_b += pq.top();
      a_flg = true;
    }
    pq.pop(); // 最大の値を削除
  }

  cout << sum_a - sum_b << endl;
}
