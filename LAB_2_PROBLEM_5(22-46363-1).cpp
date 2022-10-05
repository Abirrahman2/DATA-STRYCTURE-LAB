#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    int b[n];
    int temp=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int counter=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                counter++;
                b[j]=temp;
            }
        }
        if(b[i]!=temp)
        {
            b[i]=counter;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]!=temp)
        {
              cout<<a[i]<<" "<<"OCCURS"<<"="<<b[i]<<"TIMES"<<endl;
        }
    }
}

