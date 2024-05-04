#include <bits/stdc++.h>
using namespace std;

#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define PI 2.0 * acos(0.0)
#define ll long long
#define Dpos(n) fixed << setprecision(n)

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans1 = abs(a - 1);
    int ans2 = abs(b - c) + (c - 1);
    if (ans1 < ans2)
        cout << "1\n";
    else if (ans2 < ans1)
        cout << "2\n";
    else
        cout << "3\n";
}
int main()
{
    op() int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
    return 0;
}
