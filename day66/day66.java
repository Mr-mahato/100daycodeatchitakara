/* package codechef; // don't place package name! */
//  problem link : https://www.codechef.com/problems/NONNEGPROD
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
		    
		    int n = sc.nextInt();
		    int num[] = new int[n];
		    int countNeg = 0,cntzero=0;
		    for(int i=0;i<n;i++)
		    {
		        num[i] = sc.nextInt();
		        if(num[i]<0)
		        {
		            countNeg++;

		        }
		        if( num[i]==0) cntzero++;
		    }
		    if(countNeg%2==0 || cntzero>0)
		    {
		        System.out.println(0);
		    }
		    else 
		    {
		        System.out.println(1);
		  }
		   
		    
		    
		}
	}
}
