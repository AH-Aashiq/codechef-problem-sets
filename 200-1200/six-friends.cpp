#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;
        cout << min((3*x),(2*y)) << endl;

    }
    return 0;
}
