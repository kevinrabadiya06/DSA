#include<iostream>
using namespace std;
int main()
{
    int no_of_element,sear,count=0;
    cout<<"enter number of element:";
    cin>>no_of_element;
    int arr[no_of_element];
    cout<<endl<<"enter elements:";
    for(int i=0;i<no_of_element;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"enter search number:";
    cin>>sear;
   for(int i=0;i<no_of_element;i++)
    {
        if(arr[i]==sear)
        {
            cout<<endl<<"number found"<<endl<<i+1<<" th element"<<endl;
        }
        else{
            count++;
        }
    }
    if(count==no_of_element)
    {
        cout<<endl<<"number is not found"<<endl;
    }
}
