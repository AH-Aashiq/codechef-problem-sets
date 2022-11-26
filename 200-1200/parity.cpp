#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int nc;
		cin >> nc;
		if(nc%2 == 0){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
	
	return 0;
}
