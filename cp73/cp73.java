public class cp73 {
    public static String amb(int[] a , int[] b)
    {
        for(int i =0;i<a.length;i++)
        {
            if(a[i]!=b[i])
            {
                return "not ambiguous";
            }
        }
        return "ambiguous";
    }
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        while(true)
        {
            int n = sc.nextInt();
            if(n==0) break;
            int[] arr = new int[n];
            int[] brr = new int[n];
            for(int i =0;i<n;i++)
            {
                arr[i] = sc.nextInt();
                brr[arr[i]-1] = i+1;
            }
            System.out.println(amb(arr,brr));


        }
    }
}
