#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isValid(string s) {
    stack<char> mystack;
    for(int i = 0; i < s.length();i++) {
        switch (s[i])
        {
            case '(':
                mystack.push('(');
                break;
            case '[':
                mystack.push('[');
                break;
            case '{':
                mystack.push('{');
                break;
            case ')':
                if(mystack.empty()) return false;
                else {
                    if(mystack.top() != '(') return false;
                    else mystack.pop();
                }
                break;
            case ']':
                if(mystack.empty()) return false;
                else {
                    if(mystack.top() != '[') return false;
                    else mystack.pop();
                }
                break;
            case '}':
                if(mystack.empty()) return false;
                else {
                    if(mystack.top() != '{') return false;
                    else mystack.pop();
                }
                break;
            default:
                break;
        }
    }
    if(mystack.empty()) return true;
    else return false;
}
int main() {
    string s = "([)]";
    if(isValid(s)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}