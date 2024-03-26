#include <iostream>

using namespace std;
template<class t>
class stack{
    struct node{
        t item;
        node*next;
    };
    node*top;
    node*current;
public:
    stack(){
        top = NULL;
    }
    void push(t newItem){
        node*newItemptr = new node;
        newItemptr->item = newItem;
        newItemptr->next = top;
        top = newItemptr;
    }
    bool isEmpty(){
        return top == NULL;
    }
    void pop(){
        if(isEmpty()){
            cout<<"stack is empty on pop";
        }else{
            node*temp = new node;
            temp = top;
            top = top->next;
            temp = temp->next = NULL;
            delete temp;
        }
    }
    void print(){
        //node*current = new node;
        current = top;
        cout<<"[ ";
        while(current != NULL){
            cout<<current->item<<" ,";
            current=current->next;
        }
        cout<<" ]"<<endl;
    }
};

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.print();
    s.pop();
    s.print();
    s.push(6);
    s.print();
    return 0;
}
