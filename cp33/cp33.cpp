// problem link : https://www.codechef.com/problems/TRISQ
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int res ;
	    n = n-2;
	    n = n/2;
	    res = n*(n+1)/2 ;
	    cout << res << endl;
	}
	return 0;
}
