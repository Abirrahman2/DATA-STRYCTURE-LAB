#include<iostream>
using namespace std;
int main()
{
   string s;
   cout<<"ENTER THE STRING: ";
    getline(cin,s);
    int j;
    cout<<"ENTER THE VALUE: ";
    cin>>j;
    int i=2;

    while(i<s.length()){
            if(int(s[i])!=32){
                s[i]=char(int(s[i])+j);
               }

                 i=i+3;

    }

    cout<<"CONVERTED STRING: ";
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
    }




}
