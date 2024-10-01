#include "../pub/pub.hpp"

//implement a FIFO queue using only two stack
//A stack is LIFO, so we need to reverse the order of the elements in the stack

class MyQueue{
public:
    MyQueue(){

    }

    void push(int x){
        while(s1.empty() == false){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.empty() == false){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop(){
        int val = s1.top();
        s1.pop();
        return val;
    }

    int peek(){
        return s1.top();
    }

    bool empty(){
        return s1.empty();
    }

private:
    stack<int> s1;
    stack<int> s2;
};


int main(){
    cout<<"Hello World"<<endl;
    //test code here
    MyQueue* obj = new MyQueue();
    obj->push(1);  // queue is: [1]
    obj->push(2);  // queue is: [1, 2] (leftmost is front of the queue)
    obj->peek();   // return 1
    obj->pop();    // return 1, queue is [2]
    obj->empty();  // return false

    cout<<"Result: "<<obj->empty()<<endl; // return true

    return 0;
}