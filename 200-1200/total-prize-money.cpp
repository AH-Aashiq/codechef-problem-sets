#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        int total;
        cin >> x >> y;
        total = 10*x + 90*y;
        cout << total << endl;
    }
    
    return 0;
}