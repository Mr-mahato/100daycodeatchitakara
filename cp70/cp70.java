//problem link : https://www.codechef.com/problems/COMPRESSVD

public class cp70 {
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {

            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();
            }
            int c = 0;
            for(int i=0;i<n-1;i++)
            {
                if(arr[i]==arr[i+1])
                {
                    c++;
                }
            }
            System.out.println(n-c);

        }
    }
}
