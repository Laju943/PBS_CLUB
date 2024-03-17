#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ans;
    if (a != b)
    {
        int mx = max(a, b);
        ans = 2 * mx - 1;
    }
    else
    {
        ans = a + b;
    }
    cout << ans << endl;
}