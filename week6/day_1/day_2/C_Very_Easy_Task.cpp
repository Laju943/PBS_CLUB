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
bool possible(int t,int n,int x,int y){
  if(t<min(x,y)){
    return false;
  }
  int cnt=1;
  t-=min(x,y);
  cnt+=t/x + t/y;
  return cnt>=n;
}
void solve()
{
     int n,x,y;
     cin>>n>>x>>y;
     int l=0,r=max(x,y)*n,mid;
     while(l+1<r){
        mid=l+(r-l)/2;
       if(possible(mid,n,x,y)){
        r=mid;
       }
       else{
        l=mid;
       }
     }
     cout<<r<<'\n';
}
int main()
{
    op() int tc = 1;
  //  cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
    return 0;
}
