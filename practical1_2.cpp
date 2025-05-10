#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int max=0,count=0;
    cout<<"enter string"<<endl;
    getline(cin,a);
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==' '|| i+1==a.length())
        {
            if(count>max)
            {
                max=count;
            }
            count=0;

        }
        else{
            count++;
        }
    }
    cout<<endl<<"maximum number of word is:"<< max;
}
