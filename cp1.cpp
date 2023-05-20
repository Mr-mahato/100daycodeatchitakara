/*//!Chef categorises an instagram account as spam, if, the following count of the account is more than 
//!10 times the count of followers.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    
	int x,y;
	cin>>x>>y;
    y = 10*y;
    if(x>y) cout<< "YES" << endl;
    else cout << "NO" << endl;
	}
	return 0;
}
