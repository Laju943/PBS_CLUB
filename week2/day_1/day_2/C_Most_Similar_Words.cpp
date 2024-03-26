#include <bits/stdc++.h>
using namespace std;
int fun(string a, string b)
{
    int op = 0;
    for (int i = 0; i < a.size(); i++)
    {
        op += abs(a[i] - b[i]);
    }
    return op;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int minOP = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            minOP = min(minOP, fun(v[i], v[j]));
        }
    }
    cout << minOP << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}