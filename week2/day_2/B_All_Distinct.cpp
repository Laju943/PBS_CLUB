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
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        if (n % 2 != 0 && s.size() % 2 == 0)
        {
            cout << s.size() - 1 << '\n';
        }
        else if (n % 2 == 0 && s.size() % 2 != 0)
        {
            cout << s.size() - 1 << '\n';
        }
        else
        {
            cout << s.size() << '\n';
        }
    }
    return 0;
}