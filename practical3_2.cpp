#include<iostream>
#include<stack>
using namespace std;
class Node{
public:
    int data;
    Node *link;
    Node()
    {
    data=0;
    link=NULL;
    }
     Node(int data)
    {
        this->data=data;
        this->link=NULL;
    }
};
class linkedlist{
Node *head;
Node *temp = head;
public:
   linkedlist()
   {
    head=NULL;
   }
    void insert_element(int data)
   {
       Node *newNode=new Node(data);
       if(head==NULL)
       {
           head=newNode;
       }
        newNode->link = this->head;
        this->head = newNode;
   }
   void reverse_ll()
   {
       while (temp != NULL) {
            temp->link=temp;
            temp = temp->link;
        }
       head=temp;

   }
   void print() {
        if (head == NULL) {
            cout << "List empty" << endl;
            return;
        }

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->link;
        }
    }
};
int main() {

    linkedlist list;
    list.insert_element(4);
    list.insert_element(3);
    list.insert_element(2);
    list.insert_element(1);

    cout << "Elements of the list are: ";
    list.print();
    cout << endl;
    return 0;
}



