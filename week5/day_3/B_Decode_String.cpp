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
    string a;
    cin >> a;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (i + 2 < n && a[i + 2] == '0' && (i + 3 >= n || a[i + 3] != '0'))
        {
            int num = ((a[i] - '0') * 10 + (a[i + 1] - '0'));
            ans.push_back((char)(96 + num));
            i += 2;
        }
        else
        {
            int num = a[i] - '0';
            ans.push_back((char)(96 + num));
        }
    }
    cout << ans << '\n';
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
