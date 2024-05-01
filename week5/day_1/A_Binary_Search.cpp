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
    ll n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (q--)
    {
        ll l = 0, r = n - 1;
        ll x;
        cin >> x;
        bool ok = false;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (x < v[mid])
            {
                r = mid - 1;
            }
            else if (x == v[mid])
            {
                ok = true;
                break;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (ok)
            yes else no
    }
}
int main()
{
    op() int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
    return 0;
}
