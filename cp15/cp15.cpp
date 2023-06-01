// Find the minimum number of operations required to make all elements of the array equal. 
/*well this problem is about finding the minimum operation so that you can make your array equal*/
/*
https://www.codechef.com/problems/EQUALELE?tab=statement
Approach :
first find the frequency of each element and then 
just do (n-max(freq)) here you will get maximum operation to perform to make elements equal
*/

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
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    int temp[n+1] = {0};
	   // cout << "HI" << endl;
	    for(int i=0;i<n;i++)
	    {
	       // cout << temp[i] << " " ;
	        temp[arr[i]]++;
	    }
	    int c = 0;
	    for(int i=0;i<n+1;i++)
	    {
	        if(temp[i]>c)
	        {
	            c = temp[i];
	        }
	    }
	    cout << n-c << endl ;
	}
	return 0;
}
