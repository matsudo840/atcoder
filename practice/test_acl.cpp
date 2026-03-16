#include <iostream>
#include <atcoder/modint> // ACLをインクルード
using namespace std;
using namespace atcoder;

// 998244353で割った余りを自動計算する型
using mint = modint998244353;

int main() {
    // 10^9 を代入すると、自動的に 10^9 % 998244353 が計算される
    mint a = 1000000000;
    cout << a.val() << endl; 
    return 0;
}
