// problem link : https://www.codechef.com/problems/NOTIME
public class cp82 {
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(),h=sc.nextInt(),x=sc.nextInt();
        int[] a = new int[n];
        for(int i =0;i<n;i++)
            a[i] = sc.nextInt();

        int flag  = 0;
        for(int i =0;i<n;i++)
        {
            if((a[i]+x)>=h)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0) System.out.println("NO");
        else System.out.println("YES");
    }
}
