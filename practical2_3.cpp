#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test,n,flag=0;
    cin>>test;
    label:
    cin>>n;
    int arr[n];
    for(int i=0;i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        if(i%2!=0){
        if(arr[i]<arr[i-1])
        {
            int temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;
        }
        }
        else{
            if(arr[i]>arr[i-1]){
            int temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;}
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    flag++;
  if(flag<test)
  {
      goto label;
  }
    return 0;
}
