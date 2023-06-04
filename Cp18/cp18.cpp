// This is the problem solved on jun4 as 18th problem of community 
// problem link :https://www.codechef.com/problems/TWOROOKS
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,c,d;
	    cin >> a>>b >> c>>d;
	    if(a==c || b==d) cout <<"YES" << endl;
	    else cout << "NO" << endl ;
	}
	return 0;
}
