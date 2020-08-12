#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main ()
{
        pair <int ,int> a,b,c;
        int n;
        cin >> n;
        cin >> a.first >> a.second;
        cin >> b.first >> b.second;
        cin >> c.first >> c.second;
        b.first-=a.first;
        b.second-=a.second;
        c.first-=a.first;
        c.second-=a.second;
        cout << ((b.first*c.first>0 && b.second*c.second>0)?"YES":"NO") << endl;
        return 0;
}
