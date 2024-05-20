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
ll not_divisible(ll x,ll n){
  x=x-x/n;
  return x;
}
void solve()
{
     ll n,k;
     cin>>n>>k;
     ll l=1,r=n*k;
     while(l<r){
        ll mid=(l+r)/2;
        if(not_divisible(mid,n)<k){
            l=mid+1;
        }
        else{
            r=mid;
        }
     }
     cout<<l<<'\n';
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
