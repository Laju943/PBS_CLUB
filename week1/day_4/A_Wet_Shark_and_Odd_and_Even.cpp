#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 2 == 0)
    {
        cout << sum << '\n';
    }
    else
    {
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                sum -= v[i];
                break;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}