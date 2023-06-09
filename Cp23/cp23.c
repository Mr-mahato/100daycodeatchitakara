#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char ch[6];
	    char m[6];
	    scanf("%s",&ch);
	    scanf("%s",&m);
	    for(int i=0;i<5;i++)
	    {
	       if(ch[i]==m[i])
	       {
	           printf("G");
	       }
	       else
	       printf("B");
	    }
	    printf("\n");
	}
	return 0;
}

