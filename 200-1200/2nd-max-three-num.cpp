#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,y,z;
		cin >> x >> y >> z;
    
		if(x > y && x < z || x > z && x < y){
			cout << x << endl;
		}
		else if (y > x && y < z || y > z && y < x){
			cout << y << endl;
		} 
		
		else {
			cout << z << endl;
		}
	}
   return 0;
    
}
