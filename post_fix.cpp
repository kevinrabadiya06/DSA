#include<iostream>
#include<stack>
using namespace std;
int postfix(int op1 ,int op2, char op)
{
    switch(op){
case '+':
    return op1+op2;
    break;
case'-':
    return op1-op2;
    break;
case'*':
    return op1*op2;
    break;
case'/':
    return op1/op2;
    }
}
int main()
{
stack<int> st;
string str;
cin>>str;
int operand1,operand2,result;
for(int i=0;i<str.length();i++)
{
    if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
    {
       operand1=st.top();
       st.pop();
       operand2=st.top();
       st.pop();
       result=postfix(operand1,operand2,str[i]);
    }
    else{
        st.push(str[i]-'0');
    }
}
   cout<<result;
}



