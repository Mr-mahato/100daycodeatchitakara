// problem link : https://www.codechef.com/problems/PLAYFIT
public class cp85 {
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
                arr[i] = sc.nextInt();

            int minimum = arr[0],maximum=0;
            int c = 0,a=0;
            for(int i=0;i<n;i++)
            {
                if (arr[i] < minimum)
                    minimum = arr[i];
                else if (arr[i] - minimum > maximum)
                    maximum = arr[i] - minimum;
            }

            if(maximum>0) System.out.println(maximum);
            else System.out.println("UNFIT");
        }
    }
}
