#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        if(x>20) cout << "HOT\n";
        else cout << "COLD\n";
    }
    return 0;
}