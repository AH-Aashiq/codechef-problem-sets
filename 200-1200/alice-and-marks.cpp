#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    if(x >= 2*y){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    return 0;
}