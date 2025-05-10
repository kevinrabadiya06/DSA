#include<iostream>
using namespace std;
int binary_search(int arr[], int no_of_element ,int sear)
{
    int left=0,right=no_of_element;
   while(left<=right)
   {
       int mid=(left+right)/2;
       if(arr[mid]==sear)
       {
           return mid;
       }
       else if(arr[mid]>sear)
       {
           left=mid+1;
       }
       else{
        right=mid-1;
       }
   }
}
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
    int mid=binary_search(arr,no_of_element,sear);
   cout<<endl<<"number found";
}


