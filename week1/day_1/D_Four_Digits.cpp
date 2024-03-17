#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int l = a.size();
    int zero = 4 - l;
    for (int i = 0; i < zero; i++)
    {
        cout << "0";
    }
    cout << a << endl;
}