#include<iostream>
using namespace std;
struct Employee{
string  id;
int joining_year;
int salary;

};
int  main()
{
   Employee ep[10];
   for(int i=0;i<10;i++)
   {
        cout<<"EMPLOYEE "<<i+1<<" ID: ";
       cin>>ep[i].id;
       cout<<"JOINING YEAR FOR EMPLOYEE "<<i+1<<": ";
       cin>>ep[i].joining_year;
       cout<<"SALARY FOR EMPLOYEE "<<i+1<<": ";
       cin>>ep[i].salary;
       cout<<endl;

   }
   cout<<"EMPLOYEE JOINED BEFORE 2009"<<endl;

   for(int i=0;i<10;i++)
   {
       if( ep[i].joining_year<2009)
       {


       cout<<"EMPLOYEE NO "<<i+1<<" "<<"ID: "<<ep[i].id<<endl;

       }
   }

   cout<<endl;
   cout<<"EMPLOYEE WHO'S SALARY MORE THAN 20000"<<endl;
   for(int i=0;i<10;i++)
   {
       if( ep[i].salary>20000)
       {


       cout<<"EMPLOYEE NO "<<i+1<<" "<<"ID: "<<ep[i].id<<endl;

       }
   }


}
