/* package codechef; // don't place package name! */
// problem link: https://www.codechef.com/problems/ADJSUMPAR
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
		while(t!=0)
		{
		    t--;
		    int n = sc.nextInt();
		    int ar[] = new int[n];
		    int sum = 0;
		    for(int i=0;i<n;i++)
		    {
		        ar[i] = sc.nextInt();
		        sum +=ar[i];
		    }
		    if(sum%2==0)
		    {
		        System.out.println("YES");
		    }
		    else 
		    {
		        System.out.println("NO");
		    }
		    
		    
		}
		
		
	}
}
