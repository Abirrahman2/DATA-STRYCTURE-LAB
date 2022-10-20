#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,element,low,high,mid;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of this array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
 sort(a,a+n);
 cout<<"Sorted array: "<<endl;
 for(int i=0;i<n;i++)
 {
     cout<<a[i]<<" ";
 }
 cout<<endl;
 cout<<"Enter the value for search: ";
 cin>>element;
 low=0;
 high=n-1;

 while(low<=high)
 {

    mid=(low+high)/2 ;
    if(a[mid]==element)
    {
        cout<<"Element found"<<endl;
        cout<<"Position of this element in this array: "<<mid<<endl;
        break;

    }
   else if(a[mid]>element)
    {
        high=mid-1;
        continue;
    }
    else if(a[mid]<element)
    {
        low=mid+1;
        continue;
    }

 }
 if(low>high)
 {
     cout<<"Element is not found";
 }



}
