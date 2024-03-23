#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val != x)
        {
            v.push_back(val);
        }
        else
        {
            continue;
        }
    }
    for (int aso : v)
    {
        cout << aso << " ";
    }
    return 0;
}