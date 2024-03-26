#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int t = s - i - j;
            if (t >= 0 && t <= k)
            {
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}