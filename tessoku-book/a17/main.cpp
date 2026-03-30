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

    vector<int> A(N + 9);
    for (int i = 2; i <= N; i++)
        cin >> A.at(i);
    vector<int> B(N + 9);
    for (int i = 3; i <= N; i++)
        cin >> B.at(i);

    vector<int> dp(N + 9);
    dp.at(1) = 0;
    dp.at(2) = A.at(2);

    vector<int> course(N + 9);
    course.at(2) = 1;

    for (int i = 3; i <= N; i++)
    {
        if (dp.at(i - 1) + A.at(i) <= dp.at(i - 2) + B.at(i))
        {
            dp.at(i) = dp.at(i - 1) + A.at(i);
            course.at(i) = i - 1;
        }
        else
        {
            dp.at(i) = dp.at(i - 2) + B.at(i);
            course.at(i) = i - 2;
        }
    }

    int j = N;
    vector<int> ans;
    ans.push_back(N);

    while (j >= 2)
    {
        ans.push_back(course.at(j));
        j = course.at(j);
    }

    sort(all(ans));

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        if (i >= 1)
            cout << ' ';
        cout << ans.at(i);
    }
    cout << endl;
}
