#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "abcdefghijklmnopqrstuvwxyz";
    string s;
    cin >> s;
    bool ache[26] = {false};
    for (char c : s)
    {
        ache[c - 'a'] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (!ache[i])
        {
            cout << char(i + 'a') << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}