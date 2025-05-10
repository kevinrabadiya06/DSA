#include<iostream>
#include<stack>
using namespace std;
class Node{
int data;
Node *link;
public:
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
 void print() {
     Node *temp = head;
        if (head == NULL) {
            cout << "List empty" << endl;
            return;
        }

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {

    Linkedlist list;
    list.insert_element(4);
    list.insert_element(3);
    list.insert_element(2);
    list.insert_element(1);

    cout << "Elements of the list are: ";
    list.print();
    cout << endl;

    return 0;
}
   }
};

