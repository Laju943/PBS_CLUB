#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int op = 0, pos = 1;
        for (int i = 0; i < n; i++) 
        {
            
            if (v[i] > pos)
            {
                op += v[i] - pos;
                pos = v[i];
            }
            pos++;
        }
        cout << op << '\n';
    }
    return 0;
}