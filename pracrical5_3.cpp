#include<iostream>
#include<stack>
using namespace std;
int validparenthesis(string str,int size,int start){
    char closing_bracket;
     stack<char> s;
    if(str[start]=='[')
    {
        closing_bracket==']';
        s.push(str[start]);
    }
    else if(str[start]=='(')
    {
         closing_bracket==')';
         s.push(str[start]);
    }
    else
    {
         closing_bracket=='}';
          s.push(str[start]);
    }
   for(int i=start; i<size; i++)
   {
       if(str[i]==closing_bracket)
       {
          s.pop();
       }
   }
     if(s.empty())
   {
       return 0;
   }
   else{
    return 1;
   }
}
int main()
{
  string str;
  int count;
  cout<<"enter string in any bracket"<<endl;
  cin>>str;
  for(int i=0; i<str.length();i++)
  {
      if(str[i]=='{'||str[i]=='['||str[i]=='(')
            {
                count=validparenthesis(str,str.length(),i);
            }
  }
 if(count==0)
   {
       cout<<endl<<"true";
   }
   else{
    cout<<endl<<"false";
   }
return 0;
}
