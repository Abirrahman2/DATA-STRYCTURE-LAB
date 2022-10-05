#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY: ";
    cin>>n;
    int arr1[n];
    cout<<"ENTER ELEMENTS: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int arr2[n];
    for(int i=0;i<n;i++){
        if(arr2[i]!=-1){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(arr1[i]==arr1[j]){

                    count++;
                    arr2[j]=-1;
                   }
            }
            cout<<arr1[i]<<" OCCURS "<<count<<" TIMES "<<endl;
        }
    }
}
