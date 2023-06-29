//  problem link :https://www.codechef.com/problems/JDELAY
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,c=0;
	    cin >> n;
	    while(n--)
	    {
	        int a,b;
	        cin >> a >> b;
	        if(abs(a-b)>5) c++;
	    }
	    cout << c << endl;
	}
	return 0;
}
