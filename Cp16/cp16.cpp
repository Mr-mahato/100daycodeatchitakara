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
	    cin >> arr[i];
	    int b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> b[i];
	    }
	    int maxi = -10,c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>0 && b[i]>0)
	        {
	         c++;   
	        }
	        else
	        {
	            maxi =max(c,maxi);
	            c=0;
	        }
	    }
	    maxi = max(c,maxi);
	    cout << maxi<< endl;
	}
	return 0;
}
