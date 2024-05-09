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
const ll maxN = 1e4;
void solve()
{
    vector<ll> pw;
    for (int i = 1; i <= maxN; i++)
    {
        pw.push_back(pow(i, 3));
    }
    ll t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        bool found = false;

        for (int i = 0; i < maxN; i++)
        {
            if (pw[i] >= x)
            {
                break;
            }
            ll l = 0, r = maxN - 1, mid;
            ll need = x - pw[i];
            bool ok = false;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (pw[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if (pw[mid] > need)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (ok)
            {
                found = true;
                break;
            }
        }
        if (found)
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
