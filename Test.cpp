#include <bits/stdc++.h>
#define int long long
constexpr int inf = 1e9;
constexpr int INF = 1e18;
template<class Type> void cmin(Type &a, const Type &b) { if (b < a) a = b; }
template<class Type> void cmax(Type &a, const Type &b) { if (b > a) a = b; }

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::cout << n * n << '\n';

    return 0;
}