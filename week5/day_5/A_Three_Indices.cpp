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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool ok = false;
    // vector<int>ans;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i - 1] < v[i] && v[i] > v[i + 1])
        {
            yes
                    cout
                << i << " " << i + 1 << " " << i + 2 << '\n';
                ok=true;
                break;
        }
    }
    if(!ok)no
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
