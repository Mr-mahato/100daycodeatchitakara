
// problem link : https://www.codechef.com/problems/TWOVSTEN

import java.util.*;
public class cp55 {

    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
	for(int i=1;i<=t;i++)
		{
		    int num  = sc.nextInt();
		    if(num%5!=0) System.out.println(-1);
		    else if(num%10==5) System.out.println(1);
		    else if(num%10==0) System.out.println(0);
		    
		}
	}
}
