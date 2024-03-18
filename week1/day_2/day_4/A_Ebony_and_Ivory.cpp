#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool ok = false;
    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (a * i + b * j == c)
            {
                ok = true;
                break;
            }
        }
    }
    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}