#include<iostream>
using namespace std;
class stack{
int arr[10];
int top=0;
public:
    void pop(){
    cin>>arr[top];
    top++;
    }
    void push(){
    }
    void peek(){
    }
    void isempty(){
    if(top==0){
        cout<<endl<<"array is empty";
    }
    else{
        cout<<endl<<"array is not empty";
    }
}
void isfull(){
if (top==9)

}

};
int main()
{

}
