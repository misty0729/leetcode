#include <iostream>
#include<stack>
#include<queue>
using namespace std;
class MinStack {
private:
    stack<int> mystack;
    stack<int> minstack;
public:
    void push(int x) {
        mystack.push(x);
        if(!minstack.empty()){
            if(x<=minstack.top()) 
                minstack.push(x);
        }
        else {
            minstack.push(x);
        }
    }
    
    void pop() {
        int x = mystack.top();
        if(minstack.top() == x) minstack.pop();
        mystack.pop();
    }
    
    int top() {
        return mystack.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
int main() {

//  * Your MinStack object will be instantiated and called as such:
    MinStack* obj = new MinStack();
    obj->push(10);
    obj->pop();
    int param_3 = obj->top();
    // int param_4 = obj->getMin();
    // cout << param_4 << endl;
//  */
    return 0;
}