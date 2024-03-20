#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0, i = 0, j = 0, cnt = 0;
    while (r < m)
    {
        if (a[i] < b[j] && i < n)
        {
            cnt++;
            l++;
            i++;
        }
        else
        {
            cnt = l;
            cout << cnt << " ";
            r++;
            j++;
        }
    }
    return 0;
}