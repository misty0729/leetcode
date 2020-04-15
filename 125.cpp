#include<iostream>
#include<algorithm>
#include<string>
#include<regex>
using namespace std;
bool isPalindrome(string s) {
    regex re("[^a-zA-Z]+");
    s = regex_replace(s,re,"");
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int left = 0;
    int right = s.length()-1;
    while(left < right) {
        while(left < s.length() && !(s[left]<='z'&& s[left]>='a'))
            left ++;
        while(right >= 0 && !(s[right]<='z'&& s[right]>='a'))
            right--;
        if(left < s.length() && right >= 0 && left < right){
        if(s[left] == s[right]) {
            left++;
            right--;
        }
        else {
            return false;
        }
        }
    }
    return true;
}
int main() {
    string s = "110sjOd4P";
    if(isPalindrome(s)) cout << "true" << endl;
    return 0;
}