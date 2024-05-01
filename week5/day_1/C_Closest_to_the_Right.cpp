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
    int n, x, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (q--)
    {
        int l1 = 0;
        int r1 = n - 1;
        int FO = -1;
        int x;
        cin >> x;
        while (l1 <= r1)
        {
            int mid = (l1 + r1) / 2;
            if (v[mid] >= x)
            {
                FO = mid;
                // r=mid-1;//First occurance
                r1 = mid - 1; // Last occurance
            }
            else
            {
                l1 = mid + 1;
            }
        }
        if (FO>=0)
        {
            cout << FO + 1 << '\n';
        }
        else
        {
            cout << n+1 << '\n';
        }
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
