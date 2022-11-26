#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,h;
        cin >> x >> h;
        if(x < h) cout << "NO\n";
        else if(x>h) cout << "Yes\n";
        else if (x>=h) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}