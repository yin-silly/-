#include<iostream>
#include<stack>

using namespace std;

class MinStack {
private:
    stack<int> mystack,minstack;

public:
    /** initialize your data structure here. */
    MinStack() {
        minstack.push(INT_MAX); 
    }

    void push(int x) {
        mystack.push(x);
        minstack.push(::min(x, minstack.top()));
    }

    void pop() {
        mystack.pop();
        minstack.pop();
    }

    int top() {
       return   mystack.top();
    }

    int min() {
        return minstack.top();
    }
};