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
    vector<ll> v(n), pre(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v.rbegin(), v.rend());
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = v[i] + pre[i - 1];
    }
    while (q--)
    {
        ll l = 1, r = n;
        ll ans = -1;
        ll x;
        cin>>x;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (pre[mid-1] >= x)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << '\n';
    }
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
