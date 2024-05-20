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
     ll n,k;
     cin>>n>>k;
     vector<ll>v(k);
     for(int i=0;i<k;i++)cin>>v[i];
     sort(v.rbegin(),v.rend());
     ll cnt=0,pos=0;
     for(int i=0;i<k;i++){
        if(pos<v[i]){
            pos+=(n-v[i]);
            cnt++;
        }
        else{
            break;
        }
     }
     cout<<cnt<<'\n';
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
