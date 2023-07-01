#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int arr[5];
	    int c = 0;
	    for(int i=0;i<5;i++)
	    {
	        scanf("%d",&arr[i]);
	        if(arr[i]==1)
	        c++;
	    }
	    if(c==0) cout << "Beginner" << endl;
	    else if(c==2) cout << "Middle Developer" << endl;
	    else if(c==1) cout << "Junior Developer" << endl;
	    else if(c==3) cout << "Senior Developer" << endl;
	    else if(c==4) cout << "Hacker" << endl;
	    else cout << "Jeff Dean" << endl;
	    
	}
	return 0;
}
