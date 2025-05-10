#include<iostream>
using namespace std;
int binary_search(int arr[][c], int r, int sear)
{
    int start=0;
   while(start<r)
   {
       int mid=(start+r)/2;
         for(int i=0;i<c;i++)
         {
           if(arr[mid][i]==sear)
           {
             return mid;
           }
         }
       if(arr[mid][c]>sear)
       {
           start=mid+1;
       }
       else{
        r=mid-1;
       }
   }
}
int main()
{
    int r,c,sear;
    cout<<"enter number of row:";
    cin>>r;
    cout<<"enter number of columns:";
    cin>>c;
    int arr[r][c];
    cout<<endl<<"enter elements:";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
        cin>>arr[i][j];
        }
    }
    cout<<endl<<"enter search number:";
    cin>>sear;
    int mid=binary_search(arr[][c-1],r-1,sear);
   cout<<endl<<"number found";
}


