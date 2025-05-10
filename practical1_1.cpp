#include<iostream>
#include<string>
using namespace std;
int main()
{
    int k,n;
    cout<<"enter no of element:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter element:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter sum key:"<<endl;
    cin>>k;
    if(n%2==0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int temp=arr[i]+arr[j]%k;

            }
        }
    }
    else
    {
        cout<<"pair not found"<<endl;
    }
}
