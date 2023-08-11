// problem link : https://www.codechef.com/problems/EZSPEAK?tab=statement
public class cp84 {
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int c = 0,flag=0;
            int n = sc.nextInt();
            String st = sc.next() ;
            for(int i =0;i<n;i++)
            {
                if(st.charAt(i)!='a'  || st.charAt(i)!='e'|| st.charAt(i)!='i'||st.charAt(i)!='o'||st.charAt(i)!='u')
                {
                    c++;
                }
                else c=0;
                if(c>=4) {
                    flag = 1;
                    break;
                }
            }
            if(flag==1) System.out.println("YES");
            else System.out.println("NO");


        }
    }
}
