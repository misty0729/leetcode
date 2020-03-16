import java.util.*;
public class Solution438 {
    public static void main(String[] args) {
        String s ="abab";
        String p = "ab";
        System.out.println(findAnagrams(s, p));
    }

    public static List<Integer> findAnagrams(String s, String p) {
        int[] letter = new int[26];
        int[] ifin = new int[26];
        int number = 0;
        for(int i = 0; i < p.length(); i++) {
            letter[p.charAt(i)-'a'] += 1;
            ifin[p.charAt(i)-'a'] += 1;
            number += 1;
        }
        int l = 0;
        int r = -1;
        List<Integer> result = new ArrayList<Integer>();
        while(l<s.length()) {
            if((r+1)<s.length() && number != 0) {//其实就是考虑[l,r]这个之间的元素是否满足要求
                if(letter[s.charAt(r+1)-'a'] > 0) {
                    r++;
                    number--;
                    letter[s.charAt(r)-'a'] -= 1;
                }
                else if(ifin[s.charAt(r+1)-'a']>0 ) {//把左边的向右移动1位
                    number++;
                    letter[s.charAt(l)-'a'] += 1;
                    l++;
                }
                else if(ifin[s.charAt(r+1)-'a']==0){//说明这个不包含在里面，需要把整体移动过来
                    for(int m = l; m <= r; m++) {
                        number ++;
                        letter[s.charAt(m)-'a']+=1;
                    }
                    r ++;
                    l = r+1;

                }
            }
            else {
                if(number == 0) {
                    result.add(l);
                }
                number++;
                letter[s.charAt(l)-'a'] += 1;
                l++;
            }
        }   
        return result;
    }
}