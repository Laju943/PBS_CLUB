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
     ll n,x;
     cin>>n>>x;
     vector<ll>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     ll l=0,r=1e10,ans;
     while(l+1<r){
        ll mid=l+(r-l)/2;
        ll total_water=0;
        for(int i=0;i<n;i++){
            if(v[i]<mid){
                total_water+=(mid-v[i]);
            }
        }
         if(total_water>x){
             r=mid;
            }
            else{
                l=mid;
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
