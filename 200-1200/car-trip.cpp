#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while (t--)
    {
        int n,cost,km;
        cost = 3000;
        km = 10;
        cin >> n;
        if(n<=300){
            cout << cost <<endl;
        }
        else{
            cout << km*n << endl;
        }

    } 
}
