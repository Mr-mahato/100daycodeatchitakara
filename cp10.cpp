//! This program is to find and solve the question of codechef
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    int c=0;
	    cin >> n>> k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	       
	        if(arr[i]>k)
	        {
	            c++;
	        }
	    }
	    cout << c << endl;
	}
	return 0;
}
