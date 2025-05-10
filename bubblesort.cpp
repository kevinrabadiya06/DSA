#include<iostream>
using namespace std;
int main()
{
    int no_of_element,flag=0;
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
       for(int j=0;j<no_of_element-i-1;j++)
       {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag++;
        }
       }
       if(flag==0)
        {
            cout<<endl<<"array sorted";
            break;
        }
    }
    for(int i=0;i<no_of_element;i++)
    {
        cout<<endl<<arr[i];
    }
}

