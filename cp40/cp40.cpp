// problem link :https://www.codechef.com/problems/JOHNY
#include<bits/stdc++.h>
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
	    int k ;
	    cin >> k;
	    int uncle_johny = arr[k-1];
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==uncle_johny)
	        {
	            cout << i+1 << endl;
	            break;
	        }
	    }
	}
	return 0;
}
