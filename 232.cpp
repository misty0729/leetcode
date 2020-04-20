#include<iostream>
#include<stack>
using namespace std;
class MyQueue {
private:
    stack<int> mystack_false;
    stack<int> mystack_true;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        mystack_false.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int temp;
        if(!mystack_true.empty()) {
            temp = mystack_true.top();
            mystack_true.pop();
        }
        else {
            while(!mystack_false.empty()) {
                mystack_true.push(mystack_false.top());
                mystack_false.pop();
            }
            temp = mystack_true.top();
            mystack_true.pop();
        }
        return temp;
    }
    
    /** Get the front element. */
    int peek() {
        int temp;
        if(!mystack_true.empty()) {
            temp = mystack_true.top();
        }
        else {
            while(!mystack_false.empty()) {
                mystack_true.push(mystack_false.top());
                mystack_false.pop();
            }
            temp = mystack_true.top();
        }
        return temp;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return(mystack_false.empty() && mystack_true.empty());
    }
};