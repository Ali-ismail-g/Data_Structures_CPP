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
    void removeFirst(){
        if(length == 0){
            cout << "Can not remove from empty list\n";
            return;
        }else if(length == 1){
            delete first;
            first = last = NULL;
            length--;
        }else{
            Node*curr = first;
            first = first->next;
            delete curr;
            length--;
        }
    }
    void removeLast(){
        if(length == 0){
            cout << "Can not remove from empty list\n";
            return;
        }else if(length == 1){
            delete first;
            first = last = NULL;
            length--;
        }else{
            Node*curr = first->next;
            Node*prev = first;
            while(curr != last){
                prev=curr;
                curr=curr->next;
            }
            delete curr;
            prev->next=NULL;
            last=prev;
            length--;
        }
    }
    void removeElement(int element){
        if(length ==0){
            cout << "Can not remove from empty list\n";
            return;
        }
        Node*prev,*curr;
        if(first->item == element){
            curr=first;
            first=first->next;
            delete curr;
            length--;
            if(length==0){
                last=NULL;
            }
        }else{
            curr=first->next;
            prev=first;
            while(curr!=NULL && curr->item!=element){
                prev=curr;
                curr=curr->next;
            }
            if(curr==NULL){
                cout<<"element not found!!"<<endl;
                return;
            }else{
                prev->next=curr->next;
                if(last==curr){
                    last=prev;
                }
                delete curr;
                length--;
            }
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
    cout<<endl;
    l.removeFirst();
    l.removeLast();
    l.print();
    cout<<endl;
    l.removeElement(2);
    l.print();

}
