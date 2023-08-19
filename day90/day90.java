public class day90 {
    /* package codechef; // don't place package name! *
/* Name of the class has to be "Main" only if the class is public. */
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0)
		{
		    int n = sc.nextInt();
		    String bin1 = sc.next();
		    String bin2 = sc.next();
		    int countInBin1 = 0 , countInBin2 = 0;
		    for(int k = 0;k<n;k++)
		    {
		        if(bin1.charAt(k)=='1')
		        {
		            countInBin1++;
		        }
		        if(bin2.charAt(k)=='1')
		        {
		            countInBin2++;
		        }
		    }
		    if(countInBin2==countInBin1) System.out.println("YES");
		    else System.out.println("NO");
		    
		}
}

}
