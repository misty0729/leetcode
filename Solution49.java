import java.util.*;

class Solution49 {
    public static void main(String []args) {
        String[] nums = {"eat", "tea", "tan", "ate", "nat", "bat"};
        groupAnagrams(nums);
    }
    public static List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> result = new ArrayList<>();
        Map<List<Integer>,List<String>> mymap = new HashMap<>();
        for(String mystr: strs) {
            List<Integer> letter = new ArrayList<>();
            for(int i = 0; i < 26; i++) {
                letter.add(0);
            }
            for(int i = 0; i < mystr.length(); i++) {
                int index = mystr.charAt(i)-'a';
                letter.set(index,letter.get(index)+1);
            }
            if(mymap.containsKey(letter)) {
                mymap.get(letter).add(mystr);
            }
            else {
                List<String> stemp = new ArrayList<>();
                stemp.add(mystr);
                mymap.put(letter,stemp);
            }
        }
        for(List<Integer> key : mymap.keySet()){
            result.add(mymap.get(key));
            System.out.println(mymap.get(key));
         }
         return result;
    }
}