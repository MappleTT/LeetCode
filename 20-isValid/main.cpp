#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;



template<typename T>
class Array{
private:
    T *data;         //数组名
    int size;         //数组中元素的个数
    int Capacity;    //数组容量
public:
    Array(int Capacity){
        data=new T [Capacity];
        this->size=0;
        this->Capacity=Capacity;
    }

    Array(){
        data=new T [100000];
        this->size=0;
        this->Capacity=100000;
    }

    //获得数组的元素个数
    int  getSize(){
        return size;
    }

    //判断数组是否为空
    bool isEmpty(){
        return size==0;
    }

    //获得数组的容量
    int getArray(){
        return Capacity;
    }

    //在数组中插入一个元素
    void add(int index,T elem){
        if(index<0||index>Capacity){
            cout<<"插入的位置有误"<<endl;
            return ;
        }
        if(size>=Capacity){
            resize(Capacity*2);
        }
        for(int i=size-1;i>=index;i--){
            data[i+1]=data[i];
        }
        data[index]=elem;
        size++;
    }

    //在数组的最后一个位置添加一个新元素elem;
    void addLast(T elem){
        data[size]=elem;
        size++;
    }

    //获取index位置的数组元素
    T get(int index){
        if(index<0||index>=size){
            cout<<"您输入的位置有误";
            return -1;
        }
        return data[index];
    }

    //在index位置处修改数组元素的值
    void set(int index,T elem){
        if(index<0||index>=size){
            cout<<"您输入的位置有误";
            return ;
        }
        data[index]=elem;
    }


    //查找数组中是否有元素e
    bool contains(T e){
        for(int i=0;i<size;i++){
            if(data[i]==e)
                return true;
        }
        return false;
    }

    //查找数组中元素e的索引index
    int find(T e){
        for(int i=0;i<size;i++){
            if(data[i]==e)
                return i;
        }
        return -1;
    }

    //删除数组中索引为index位置的元素，并且返回被删除的元素的值
    T remove(int index){
        if(index<0||index>=size){
            return -1;
        }
        T ret=data[index];
        for(int i=index+1;i<size;i++){
            data[i-1]=data[i];
        }
        size--;
        //缩容的时候防止复杂度的震荡
        if(size<Capacity/4&&Capacity/2!=0)
            resize(Capacity/2);
        return ret;
    }

    //改变数组的容量
    void resize(int newCapacity){
        T  *newdata=new T [newCapacity];
        for(int i=0;i<size;i++){
            newdata[i]=data[i];
        }
        data=newdata;
        Capacity=newCapacity;
    }

    //打印数组元素
    void PrintArray(){
        for(int i=0;i<size;i++)
            cout<<data[i]<<" ";
        cout<<endl;
    }
};



template<typename  T>
class ArrayStack{

private:
    Array<T> *arr;
public:

    ArrayStack(int Capacity){
        arr=new Array<T>[Capacity];
    }

    ArrayStack(){
        arr=new Array<T>();
    }

    //入栈
    void push(T e){
        arr->addLast(e);
    }

    //出栈,返回弹出的元素T
    T pop(){
        return  arr->remove(arr->getSize()-1);
    }

    //判断栈是否为空
    bool isEmpty(){
        return arr->isEmpty();
    }

    //查看栈顶元素
    T peek(){
        return arr->get(arr->getSize()-1);
    }

    //获得栈中的元素个数
    int getSize(){
        return arr->getSize();
    }

    ~ArrayStack(){
        delete []arr;
        arr= nullptr;
    }
};



class Solution {
public:
    bool isValid(string s) {
        ArrayStack<char> *arr= new ArrayStack<char>();
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='{'||s[i]=='['||s[i]=='('){
                arr->push(s[i]);
            }
            else{
                if(arr->isEmpty())
                    return false;
                char a=arr->pop();
                if(s[i]=='}'&&a!='{')
                    return false;
                else if(s[i]==']'&&a!='[')
                    return false;
                else if(s[i]==')'&&a!='(')
                    return false;
            }
        }
        if(arr->isEmpty())
            return true;
        else
            return false;
    }
};

