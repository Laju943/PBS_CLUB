#include <bits/stdc++.h>
using namespace std;

#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define PI 2.0 * acos(0.0)
#define ll long long
#define Dpos(n) fixed << setprecision(n)
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<pair<char, int>> order;

    char mn = min(s[0], s[n - 1]);
    char mx = max(s[0], s[n - 1]);

    for (int i = 0; i < n; i++)
    {
        if ((s[i] >= mn and s[i] <= mx))
        {
            order.push_back({s[i], i});
        }
    }

    sort(order.begin(), order.end(), [&](pair<char, int> a, pair<char, int> b)
         { return a.second < b.second; });

    if (order.size() > 2)
    {
        sort(order.begin() + 1, order.begin() + order.size() - 1, [&](pair<char, int> a, pair<char, int> b)
             {
                if(s[0]>s[n-1]){
                    return a.first>b.first;
                }
                return a.first<b.first; });
    }

    vector<int> seq;

    ll moves = 0;

    seq.push_back(1);

    for (int i = 1; i < order.size(); i++)
    {
        moves += abs(order[i - 1].first - order[i].first);
        seq.push_back(order[i].second + 1);
    }

    cout << moves << " " << seq.size() << endl;

    for (auto i : seq)
    {
        cout << i << " ";
    }
    cout << '\n';
}
int main()
{
    op() int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
    return 0;
}
