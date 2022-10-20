#include<iostream>
using namespace std;
int main()
{


int n;
cout<<"ENTER THE SIZE OF THE ARRAY: ";
cin>>n;
int a[n];
cout<<"ENTER THE ELEMENTS OF THIS ARRAY: ";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int temp;
for(int i=0;i<n-1;i++){

    for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {

            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }

}
cout<<"SORTED ARRAY: ";
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
}


