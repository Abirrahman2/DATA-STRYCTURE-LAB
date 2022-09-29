#include<iostream>
using namespace std;
void show(int a,int b)
{
     int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x ;i++)
    {
        cin>>arr[i];
    }

    cout<<endl;
    for(int i=0;i<x;i++)
    {

        for(int j=a;j<=b;j++)
        {
        if(j%2!=0&& arr[i]==j)
        cout<<j<<" ";
        }
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    show(m,n);
}
