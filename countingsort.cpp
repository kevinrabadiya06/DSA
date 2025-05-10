#include<iostream>
using namespace std;
void countingsort(int arr[], int size)
{
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int countingarr[max+1];
    for(int i=0; i<=max;i++)
    {
        arr[i]=0;
    }
}

int main()
{
    int n;
    cout<<"enter length of array:";
    cin>>n;
    int arr[n];
    cout<<endl<<"enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    countingsort( arr, n);
}
