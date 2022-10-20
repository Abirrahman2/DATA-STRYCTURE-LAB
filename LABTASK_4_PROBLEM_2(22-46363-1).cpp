#include<iostream>
using namespace std;
int main()
{
    int n,value;
    int position=-1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"ENTER VALUE YOU WANT TO SEARCH: ";
    cin>>value;
    for(int i=0;i<n;i++)
    {
        if(a[i]==value)
        {
            position=i;
            break;
        }
    }
    if(position==-1)
    {
        cout<<"NUMBER IS NOT FOUND";
    }
    else
    {
        cout<<"POSITION OF THIS VALUE'S IN ARRAY: "<<position<<endl;
    }
}
