#include "../pub/pub.hpp"

#include <queue>

//implement a LIFO stack using only two queues
//A queue is FIFO, so we need to reverse the order of the elements in the queue

class MyStack {
public:
    MyStack() {

    }
    
    void push(int x) {
        while(q1.empty() == false) {
            q2.push(q1.front());
            q1.pop();

        }
        q1.push(x);
        while(q2.empty() == false){
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        int val = q1.front();
        q1.pop();
        return val;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty(); 
    }

private:
    queue<int> q1;
    queue<int> q2;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */