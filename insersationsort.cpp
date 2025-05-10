#include<iostream>
using namespace std;
int main()
{
    int no_of_element;
    cout<<"enter number of element:";
    cin>>no_of_element;
    int arr[no_of_element];
    cout<<endl<<"enter elements:";
    for(int i=0;i<no_of_element;i++)
    {
        cin>>arr[i];
    }
   for(int i=no_of_element;i>=0;i--)
    {

       if(arr[i+1]>arr[i])
        {
           i+1=i;
        }


    }
    for(int i=0;i<no_of_element;i++)
    {
        cout<<endl<<arr[i];
    }
}


