#include<iostream>
using namespace std;
int main()
{
     int n,x;
     cout<<"ENTER THE SIZE OF THE FIRST ARRAY: ";
    cin>>n;
    int a[n];
    cout<<"ENTER THE SIZE OF THE SECOND ARRAY: ";
    cin>>x;
    int b[x];
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
    int i,j;
     bool temp=false;

     cout<<"UNCOMMON ELEMENTS: "<<endl;
    for( i=0;i<n;i++)
    {
        for( j=0;j<x;j++)
        {
            if(a[i]==b[j])
            {
                temp=true;
                break;
            }
            else if(a[i]!=b[j])
            {
                temp=false;
                continue;
            }
        }

        if(temp==false)
        {
            cout<<a[i]<<" ";
        }

    }


        for( i=0;i<x;i++)
        {
        for( j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                temp=true;
                break;
            }
            else if(b[i]!=a[j])
            {
                temp=false;
                continue;
            }
        }
        if(temp==false)
        {
            cout<<b[i]<<" ";
        }

    }

     }


