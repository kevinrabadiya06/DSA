#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};


Node* mergeSortedList(Node* a, Node* b) {


    vector<int> vec;


    while (a != NULL) {
        vec.push_back(a->data);
        a = a->next;
    }

    while (b != NULL) {
        vec.push_back(b->data);
        b = b->next;
    }

    sort(vec.begin(), vec.end());


    Node* temp = new Node(-1);
    Node* head = temp;
    for (int i = 0; i < vec.size(); i++) {
        temp->next = new Node(vec[i]);
        temp = temp->next;
    }
    head = head->next;


    return head;
}

void printdata(Node* res)
{
   Node* temp = res;
      cout << "Merged Link List is:" << endl;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}
int main() {

    Node* a = new Node(2);
    a->next = new Node(4);
    a->next->next = new Node(8);
    a->next->next->next = new Node(9);

    Node* b = new Node(1);
    b->next = new Node(3);
    b->next->next = new Node(8);
    b->next->next->next = new Node(10);

    Node* res = mergeSortedList(a, b);
    printdata(res);

}
