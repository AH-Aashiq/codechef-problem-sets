#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,x;
        cin >> n >> m >> x;
        int total = (2*n) + (2*m);
        cout << total*x << endl;
    }
    return 0;
}