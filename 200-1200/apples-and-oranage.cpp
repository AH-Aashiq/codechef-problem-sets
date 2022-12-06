#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int a,b;
    cin >> a >> b;
    if(a+b <= x){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}
