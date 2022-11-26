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
        int A = max({x,y,z});

        if (A==x) cout << "Setter\n";
        else if (A==y) cout << "Tester\n";
        else cout << "Editorialist\n";

    }
    return 0;
}