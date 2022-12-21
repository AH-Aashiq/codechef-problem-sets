#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int a1,a2;
        a1 = x1+y1;
        a2 = x2+y2;
        cout << min({a1,a2}) << endl;
    }
    return 0;
}