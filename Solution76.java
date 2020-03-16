import java.util.*;
public class Solution76 {
    public static void main(String[] args) {
        String s ="ADOBECODEBANC";
        String t = "ABC";
        System.out.println(minWindow(s, t));
    }
    public static String minWindow(String s, String t) {

        String result="";
        int result_length = s.length()+1;
        int l = 0; int r = -1;//[l,r]
        int[] letter = new int[256];
        int[] extra = new int[256];
        int number = 0;
        for (int i = 0; i < t.length(); i++) {
            number += 1;
            if(letter[t.charAt(i)] == 0) 
                letter[t.charAt(i)] = 2;
            else 
                letter[t.charAt(i)] += 1;
        }
        
        while(l < s.length()) {
            if((r+1) < s.length() && number != 0) {
                if(letter[s.charAt(r+1)] > 1) {
                    r++;
                    number--;
                    letter[s.charAt(r)] -= 1;
                }
                else if(letter[s.charAt(r+1)] == 1) {
                    // if(letter[s.charAt(l)] >= 1) {
                    //     letter[s.charAt(l)] += 1;
                    //     number++;
                    // }
                    // l++;
                    extra[s.charAt(r+1)] += 1;
                    r++;
                }
                else if(letter[s.charAt(r+1)] == 0) {
                    r++;
                }
            }
            else {
                if(number == 0) {
                    if((r-l+1)<result_length) {
                    result = s.substring(l,r+1);
                    result_length = result.length();
                    }
                }
                if(extra[s.charAt(l)] > 0) {
                    extra[s.charAt(l)] -= 1;
                }
                else if(letter[s.charAt(l)] >= 1) {
                    letter[s.charAt(l)] += 1;
                    number++;
                }
                l++;
            }
        }
        return result;
    }
}