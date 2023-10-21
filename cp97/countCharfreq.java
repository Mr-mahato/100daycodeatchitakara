public class countCharfreq {
    public static void main(String[] args){
        // here i am gonna solve

        String name = "chandfasdfasdgreua";
        // lets create a hash array
        int[] hash = new int[26];
        for(int i = 0;i<name.length();i++)
        {
            hash[name.charAt(i)-'a']++;
        }
      System.out.println(hash[0]);
      for(int i = 0;i<26;i++)
      {
        if(hash[i]>0)
        {
            char ch = (char)(i+97);
            System.out.println(ch + "->" + hash[i]);
        }
      }
        
    }
}


// --> This is another way of finding the frequency of characters in the array
// Data Structure used: ---> HashMap
// import java.util.*;

// public class CountCharFreq {
//     public static void main(String[] args) {
//         String name = "chandfasdfasdgreua";
//         Map<Character, Integer> freqMap = new HashMap<>();

//         for (char ch : name.toCharArray()) {
//             freqMap.put(ch, freqMap.getOrDefault(ch, 0) + 1);
//         }

//         for (Map.Entry<Character, Integer> entry : freqMap.entrySet()) {
//             System.out.println(entry.getKey() + " -> " + entry.getValue());
//         }
//     }
// }