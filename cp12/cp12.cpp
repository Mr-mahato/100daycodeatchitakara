// /*https://www.codechef.com/problems/MATCHES?tab=statement*/ ----> this is the link of problem statement
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b;
	    cin >> a >> b;
	    int res = a+b;
	    int arr[10]={6 , 2 , 5 , 5 , 4 ,5,6,3,7,6};
	    int final=0;
	    while(res!=0)
	    {
	        int temp = res %10;
	        final = final + arr[temp];
	        res =res/10;
	    }
	    cout << final << endl;
	}
	return 0;
}
