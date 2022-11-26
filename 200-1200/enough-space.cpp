#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,y;
        cin >> n >> x >> y;
        if (((1*x)+(2*y)) <=n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
    
}