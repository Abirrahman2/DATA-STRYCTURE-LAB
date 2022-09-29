#include<iostream>
using namespace std;
int main()
{
    int a[10];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY: ";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    int b,counter=0;
    cout<<"ENTER THE INTEGER NUMBER: ";
    cin>>b;
    for(int i=0;i<10;i++)
    {
        if(a[i]==b)
        {
            counter++;
            continue;
        }
    }
    cout<<counter<<endl;
}
