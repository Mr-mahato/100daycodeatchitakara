public class cp74 {
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner read = new Scanner(System.in);
        int t = read.nextInt();
        for(int i=0; i<t; i++){
            int p = read.nextInt();
            int count = 0;
            for(int j=11; j>=0; j--){
                int x = (int)Math.pow(2, j);
                while(x<=p){
                    count = count + 1;
                    p = p - x;
                }
            }
            System.out.println(count);
        }
    }
}
