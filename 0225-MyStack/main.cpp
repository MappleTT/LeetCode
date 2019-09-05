#include<iostream>
#include<queue>
using namespace std;

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        vector<int>arr;
        //将队列中所有的元素放入到数组arr中
        while(!q.empty()){
            arr.push_back(q.front());
            q.pop();
        }
        //然后再反向将数组中的元素存入到队列中，因为每经历一次pop操作，队列中应该少一个元素，所以arr.size()-1次循环结束
        for(int i=0;i<arr.size()-1;i++){
            q.push(arr[i]);
        }

        return arr[arr.size()-1];
    }

    /** Get the top element. */
    int top() {
        vector<int>arr;
        while(!q.empty()){
            arr.push_back(q.front());
            q.pop();
        }

        //与pop操作不同的是，top操作没有删除元素,只是返回栈顶的元素
        for(int i=0;i<arr.size();i++){
            q.push(arr[i]);
        }
        return arr[arr.size()-1];
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }

private:
    queue<int>q;
};

int main()
{




    return 0;
}