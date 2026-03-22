#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>> data(N, vector<char>(N, '-'));

  int a, b;
  for (int i = 0; i < M; i++)
  {
    cin >> a >> b;
    data.at(a - 1).at(b - 1) = 'o';
    data.at(b - 1).at(a - 1) = 'x';
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cout << data.at(i).at(j);
      if (j == N - 1)
      {
        cout << endl; // 末尾なら改行
      }
      else
      {
        cout << " "; // それ以外なら空白
      }
    }
  }
}
