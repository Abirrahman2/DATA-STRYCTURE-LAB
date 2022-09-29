#include <iostream>
using namespace std;
int main()
{
    cout<<"ENTER SIZE OF THE FIRST ARRAY: ";
    int n,x;
    cin>>n;
    cout<<"ENTER SIZE OF THE SECOND ARRAY: ";
    cin>>x;
    int a[n];
    int b[x];
    int c[n+x];
   cout<<"ENTER THE ELEMENTS OF THE FIRST ARRAY: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"ENTER THE ELEMENTS OF THE SECOND ARRAY: ";
    for(int i=0;i<x;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        c[i]=a[n-(i+1)];

    }
    int k=x-1;
    for(int i=n;i<n+x;i++)
    {
        c[i]=b[k];
        k--;
    }
    for(int i=0;i<n+x;i++)
    {
        cout<<c[i]<<" ";
    }

}
