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
            cin >> v[i];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;
            for (auto c : s)
            {
                if (c == 'D')
                {
                    v[i]++;
                    if (v[i] == 10)
                    {
                        v[i] = 0;
                    }
                }
                else
                {
                    v[i]--;
                    if (v[i] == -1)
                    {
                        v[i] = 9;
                    }
                }
            }
        }
        for (auto val : v)
            cout << val << " ";
        cout << '\n';
    }
    return 0;
}