#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = b - a;
    if (c >= -1)
    {
        cout << c + 1 << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}