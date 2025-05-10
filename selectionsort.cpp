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
   for(int i=0;i<no_of_element;i++)
    {
       for(int j=i+1;j<no_of_element;j++)
       {
        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
       }
    }
    for(int i=0;i<no_of_element;i++)
    {
        cout<<endl<<arr[i];
    }
}


