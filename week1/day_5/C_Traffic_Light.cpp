#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        s = s + s;
        int pos = 0, mxP = INT_MIN;
        for (int i = 0; i < s.size() - 1; i++)
        {

            if (s[i] == c)
            {
                pos = 0;
                while (s[i] != 'g' && i < s.size())
                {
                    pos++;
                    i++;
                }
                mxP = max(mxP, pos);
            }
        }
        cout << mxP << '\n';
    }
    return 0;
}
