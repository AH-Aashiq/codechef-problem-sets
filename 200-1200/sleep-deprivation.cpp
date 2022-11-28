#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w;
        cin >> w;
        if(w == 7) cout << "NO\n";
        else if (w>7) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
