#include <bits/stdc++.h>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define int long long
#define ii pair<int, int>
#define fr(i, a, b) for (int i = a; i < b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define all(x) (x).begin(), (x).end()
#define sort(x) sort(all(x))
#define reverse(x) reverse(all(x))
#define vector(x, n)  \
    vector<int> x(n); \
    fr(i, 0, n) cin >> x[i]
#define outDouble(x) cout << fixed << setprecision(10) << x << endl
#define print(v)          \
    for (auto &z : v)     \
        cout << z << " "; \
    cout << endl;
#define F first
#define S second
#define MP make_pair
#define py cout << "YES\n"
#define pn cout << "NO\n"
const int N = 1e5 + 10;
const int mod = 1e9 + 7;
using namespace std;

void solution()
{
    int a, b;
    cin >> a >> b;
    cout << 2 << endl;
    cout << a - 1 << " " << 1 << endl
         << a << " " << b << endl;
}

signed main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solution();
    return 0;
}