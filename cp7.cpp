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
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i] ;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin >> b[i];
	    }
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>=b[i] && i==0)
	        {
	            c++;
	        }
	        else
	        {
	            int temp = 0;
	            temp=a[i]-a[i-1];
	            if(temp >= b[i])
	            {
	                c++;
	            }
	        }
	    }
	    printf("%d\n",c);
	}
	return 0;
}
