#include <iostream>

using namespace std;
class linkedList{ /// time complexity O(n)
    struct Node{
        int item;
        Node*next;
    };
    Node*first;
    Node*last;
    int length;
public:
    linkedList(){
        first = last = NULL;
        length = 0;
    }
    bool isEmpty(){
        return length==0;
    }
    void insertFirst(int element){
        Node*newNode = new Node;
        newNode->item=element;
        if(length == 0){
            first = last = newNode;
            newNode->next = NULL;
        }else{
            newNode->next = first; ///insert element front direction
            first = newNode;
        }
        length++;
    }
    void insertLast(int element){
        Node*newNode = new Node;
        newNode->item=element;
        if(length == 0){
            first = last = newNode;
            newNode->next = NULL;
        }else{
            last->next = newNode;
            newNode->next=NULL;   ///insert element rear direction
            last = newNode;
        }
        length++;
    }
    void insertAtPos(int pos,int element){
        if(pos<0 || pos>length){
            cout<<"Out of range!!";
        }else{
            Node*newNode = new Node;
            newNode->item = element;
            if(pos == 0)
                insertFirst(element);
            else if(pos == length)
                insertLast(element);
            else{
                Node*curr = first;
                for(size_t i = 1;i<pos;i++){
                    curr = curr->next;
                }
                newNode->next = curr->next;
                curr->next = newNode;
                length++;
            }
        }
    }
    void print(){
        Node*curr = first;
        while(curr!=NULL){
            cout<<curr->item<<" ";
            curr = curr->next;
        }
    }
};

int main()
{
    linkedList l;
    l.insertFirst(1);
    l.insertLast(2);
    l.insertLast(3);
    l.insertLast(4);
    l.print();
    cout<<endl;
    l.insertAtPos(1,5);
    l.print();
    cout<<endl;
    l.insertFirst(12);
    l.insertLast(22);
    l.print();
}
