#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a >> b;
        
        int total = a+b;
        if(total%2==0)
        cout << "YES\n";
        else
        cout << "NO\n";
    }
    return 0;
}