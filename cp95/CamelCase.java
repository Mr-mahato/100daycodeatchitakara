class CamelCase {
//    import java.lang.StringBuilder;
   class Solution{

       static String toCamelCase(String s){
           StringBuilder temp = new StringBuilder(s);
           for(int i =0;i<temp.length();i++)
           {
               int storeInd=0;
               if(temp.charAt(i)=='-' || temp.charAt(i)=='_')
               {
                   storeInd = i;
                   temp.deleteCharAt(i);
               }
               if(storeInd !=0){
                   char ch = temp.charAt(storeInd);
                   temp.setCharAt(i,Character.toUpperCase(ch));
               }
           }

           return temp.toString();
       }
   }
}
