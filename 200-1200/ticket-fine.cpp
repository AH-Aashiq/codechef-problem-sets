#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int x,p,q;
       cin >> x >> p >> q;
       cout << (p-q)*x << endl;
    }
    return 0;
}