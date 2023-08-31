import java.util.ArrayList;

public class Solution {

    public static int findDuplicate(ArrayList<Integer> arr) {

        //    Write your code here.
        int n = arr.size();
        int hash[] = new int[n+1];
        for(int i =0;i<n;i++)
        {
            hash[arr.get(i)]++;
        }

        for(int i =0;i<=n;i++)
        {
            if(hash[i]>1)
            {
                return i;
            }
        }
        return -1;
    }
}