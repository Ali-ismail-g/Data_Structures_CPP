#include <iostream>

using namespace std;
const int max_size=100;
class stack{
    int top;
    int items[max_size];
public:
    stack(){
        top = -1;
    }
    void push(int element){
        if(top >= max_size-1){
            cout<<"Stack is full!";
        }else{
            top++;
            items[top]=element;
        }
    }
    bool isEmpty(){
       return top < 0;
    }

    void pop(){
        if(isEmpty())
            cout<<"stack is empty!";
        else
            top--;
    }
    void pop(int& element){ //call by reference
        if(isEmpty())
            cout<<"stack is empty!";
        else
        {
            element = items[top];
            top--;
        }
    }
    void print(){
        cout<<"[";
        for(int i=top;i>=0;i--){
            cout<<items[i]<<" "<<", ";
        }
        cout<<"]"<<endl;
    }
};
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.print();
    s.pop();
    s.print();
    s.push(8);
    s.print();
    return 0;
}
