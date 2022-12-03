#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;
        
        if((x*2) > (y*5)){
            cout << "Chocolate\n";
        }
        else if ((y*5) > (x*2)){
            cout << "Candy\n";
        }
        else{
            cout << "Either\n";
        } 
        
    }
    return 0;
}