import java.util.*;
public class Solution125 {
    public static boolean isPalindrome(String s) {
        int l = 0;
        int r = s.length() - 1;
        s = s.toLowerCase();
        while(l <= r) {
            //等号弄清楚啊！
            if(!((s.charAt(l)<='z' && s.charAt(l)>='a') || (s.charAt(l)<='9' && s.charAt(l)>='0'))) {
                l++;
                continue;
            }
            if(!((s.charAt(r)<='z' && s.charAt(r)>='a') || (s.charAt(r)<='9' && s.charAt(r)>='0'))) {
                r--;
                continue;
            }
            // System.out.println(s.charAt(l)+","+s.charAt(r));
            if(s.charAt(l) != s.charAt(r)) {
                return false;
            }
            else {
                l++;
                r--;
                continue;
            }
        }
        return true;
    }
    public static void main(String [] agrs) {
        String s = "race a car";
        System.out.println(isPalindrome(s));

    }
}