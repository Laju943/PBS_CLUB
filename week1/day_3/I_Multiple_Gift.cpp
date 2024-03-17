#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x, y, cnt = 0;
    cin >> x >> y;
    ll i=x;
    while (i<=y)
    {   
       cnt++;
       i=i*2;
    }
    cout << cnt << '\n';
    return 0;
}