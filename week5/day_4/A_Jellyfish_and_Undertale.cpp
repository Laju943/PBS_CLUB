#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
       ll maxT = b;
        for (int i = 0; i < n; i++)
        {
           maxT+=min(ar[i],a-1);
        }
        cout << maxT << endl;
    }
    return 0;
}