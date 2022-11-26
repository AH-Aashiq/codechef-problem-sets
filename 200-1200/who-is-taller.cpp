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
        if(a>b)
        cout << "A\n";
        else
        cout << "B\n";
    }
    return 0;
}