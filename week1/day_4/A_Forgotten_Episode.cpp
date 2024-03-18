#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n-1);
    bool a[n] = {false};
    for (int i = 0; i < n-1; i++)
    {
        cin >> v[i];
    }
    for (int val : v)
    {
        a[val] = true;
    }
    for (int i = 1; i <=n; i++)
    {
        if (!a[i])
        {
            cout << i << '\n';
        }
    }
    return 0;
}