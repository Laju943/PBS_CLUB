#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v[3];
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            v[i].resize(n);
            for (int j = 0; j < n; j++)
            {
                cin >> v[i][j];
                mp[v[i][j]]++;
            }
        }
        int a[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[v[i][j]] == 1)
                {
                    a[i] += 3;
                }
                else if (mp[v[i][j]] == 2)
                {
                    a[i] += 1;
                }
            }
        }
        cout << a[0] << " " << a[1] << " " << a[2] << "\n";
    }
    return 0;
}