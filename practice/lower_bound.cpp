#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;

int main()
{
    vector<int> a = {0, 10, 13, 14, 20};
    // aにおいて、12 以上最小の要素は 13
    cout << *lower_bound(a.begin(), a.end(), 12) << endl; // 13

    // 14 以上最小の要素は 14
    cout << *lower_bound(a.begin(), a.end(), 14) << endl; // 14

    // 10 を超える最小の要素は 13
    cout << *upper_bound(a.begin(), a.end(), 10) << endl; // 13

    cout << lower_bound(a.begin(), a.end(), 9) - a.begin() << endl;
    cout << lower_bound(a.begin(), a.end(), 10) - a.begin() << endl;
    cout << lower_bound(a.begin(), a.end(), 11) - a.begin() << endl;
    cout << lower_bound(a.begin(), a.end(), 12) - a.begin() << endl;
    cout << lower_bound(a.begin(), a.end(), 13) - a.begin() << endl;
    cout << lower_bound(a.begin(), a.end(), 14) - a.begin() << endl;
}
