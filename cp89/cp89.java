/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0)
		{
		    int battery = sc.nextInt();
		    int ans = 0;
		    for(int i =battery;battery!=50;i++)
		    {
		    if(battery>50)
		    {
		        ans++;
		        battery -=3;
		        
		    }
		    else{
		        ans++;
		        battery +=2;
		    }
		    }
		    
		System.out.println(ans);
		    }
	}
}
