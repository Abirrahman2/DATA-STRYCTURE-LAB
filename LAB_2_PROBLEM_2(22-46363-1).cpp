#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"ENTER THE SIZES OF THE FIRST ARRAY: ";
    cin>>n;
    cout<<"ENTER THE SIZES OF THE SECOND ARRAY: ";
    cin>>x;
    int a[n];
    int b[x];
    cout<<"ENTER ELEMENTS OF THE FIRST ARRAY: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"ENTER ELEMENTS OF THE SECOND ARRAY: ";
    for(int i=0;i<x;i++)
    {
        cin>>b[i];
    }
    cout<<"COMMON ELEMENTS: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                break;
            }
        }
    }
}
