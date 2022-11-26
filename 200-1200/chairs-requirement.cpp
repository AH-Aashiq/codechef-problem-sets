#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if(x<=y){
            cout << int(0) << endl;
        }
        else{
            int ex_chairs = x-y;
            cout << ex_chairs << endl;
        }
        
    }
    return 0;
}
