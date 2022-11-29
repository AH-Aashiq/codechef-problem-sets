#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        int mx = max({x,y,z});
        int mn = min({x,y,z});
        cout << mx - mn << endl;
    }
    return 0;
}