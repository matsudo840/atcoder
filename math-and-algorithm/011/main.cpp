#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

// 型エイリアス（Pythonの int/float の感覚に近づける）
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

bool isprime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int N;
    cin >> N;

    vector<int> result;
    for (int i = 2; i <= N; i++)
    {
        if (isprime(i))
            result.push_back(i);
    }

    for (int i = 0; i < result.size(); i++)
    {
        if (i != 0)
            cout << " ";
        cout << result.at(i);
    }
    cout << endl;
}
