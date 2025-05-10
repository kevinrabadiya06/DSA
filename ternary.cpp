#include<iostream>
using namespace std;
int binary_search(int arr[], int no_of_element ,int sear)
{
    int left=0,right=no_of_element-1;
   while(left<right)
   {
       int mid1=left+((left+right)/3);
       int mid2=right-((left+right)/3);
       if(arr[mid1]==sear)
       {
           cout<<endl<<"number found";
       }
       else if(arr[mid2]==sear)
       {
            cout<<endl<<"number found";
       }
       else if(arr[mid1]<sear){
        right=mid1-1;
       }
       else if (arr[mid2]>sear){
        left=mid2+1;
       }
       else{
        left=mid1+1;
        right=mid2-1;
       }
   }
}
int main()
{
    int no_of_element,sear;
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
    int mid =binary_search(arr,no_of_element,sear);
}

