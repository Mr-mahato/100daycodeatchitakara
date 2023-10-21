import java.util.*;
class Arraylist{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Hello mom");
        // lets create a nested ArrayLIst
        ArrayList<ArrayList<Integer>> nestedArraList = new ArrayList<>();
      
        for(int i= 0;i<3;i++)
        {
            nestedArraList.add(new ArrayList<Integer>());
        }

        for(int i= 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                nestedArraList.get(i).add(in.nextInt());
            }
        }

        System.out.println(nestedArraList);
      

    }
}