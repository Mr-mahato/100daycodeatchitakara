/*Devu has n weird friends. Its his birthday today, so they thought that this is the best occasion for testing their friendship with him. They put up conditions before Devu that they will break the friendship unless he gives them a grand party on their chosen day. Formally, ith friend will break his friendship if he does not receive a grand party on dith day*/

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
	   // scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	       // scanf("%d",&arr[i]);
	       cin >> arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        for(int j=i+1;j<n;j++)
	        {
	            if(arr[i]==arr[j])
	            {
	                arr[j]=0;
	            }
	        }
	    }
	    int c= 0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        {
	            c++;
	        }
	    }
	   // printf("%d\n",c);
	   cout << c << endl;
	}
	return 0;
}
