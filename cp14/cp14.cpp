// this problem is solved from codechef
//-->https://www.codechef.com/problems/COOK82A

#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    char tmp[20];
	    int b,m,r,e;
	    int a = 4;
	    while(a--)
	    {
	    scanf("%s",tmp);
	    if(strcmp(tmp,"Barcelona")){}
	    else scanf("%d",&b);
	    if(strcmp(tmp,"Malaga")){}
	    else scanf("%d",&m);
	    if(strcmp(tmp,"RealMadrid")){}
	    else scanf("%d",&r);
	    if(strcmp(tmp,"Eibar")){}
	    else scanf("%d",&e);
	    
	}
	if(r<m && b>e) cout <<"Barcelona"<<endl;
	else cout << "RealMadrid"<< endl;
	    }
	return 0;
}
