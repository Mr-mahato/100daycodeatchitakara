// This is the problem solved in community 
// problem link: https://www.codechef.com/problems/HIRETEST

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m,x,y;
	    cin>>n>>m;
	    cin>>x>>y;
	    for(int i=0;i<n;i++)
	    {
	        char st[m+1];
	        cin >>st;
	        int comp=0,par=0,un=0;
	        for(int i=0;st[i]!='\0';i++)
	        {
	            if(st[i]=='F')
	            comp++;
	            else if(st[i]=='U')
	            un++;
	            else
	            par++;
	        }
	        
	        if(comp >=(x) || (comp==(x-1) && par >=y) )
	        {
	            cout << 1 ;
	        }
	        else cout << 0;
	    }
	    cout << endl;
	}
	return 0;
}
