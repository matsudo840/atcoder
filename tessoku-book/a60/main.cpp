#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int N;
vector<int> A(200009), Answer(200009);
stack<pair<int, int>> Level2;

int main()
{
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> A.at(i);

    // スタックの変化の再現
    for (int i = 1; i <= N; i++)
    {
        if (i >= 2)
        {
            Level2.push(make_pair(i - 1, A.at(i - 1)));
            while (!Level2.empty())
            {
                int kabuka = Level2.top().second;
                if (kabuka <= A.at(i))
                    Level2.pop();
                else
                    break;
            }
        }
        // 起算日の特定
        if (!Level2.empty())
            Answer.at(i) = Level2.top().first;
        else
            Answer.at(i) = -1;
    }
    // 出力
    for (int i = 1; i <= N; i++)
    {
        if (i >= 2)
            cout << " ";
        cout << Answer.at(i);
    }
    cout << endl;
}
