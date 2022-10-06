#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of column: ";
    cin>>c;
    int a[r][c];
    int t[c][r];
    for(int i=0;i<r;i++)
    {
        cout<<"Enter the elements of "<<"row no "<<i+1<<": ";
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
            t[j][i]=a[i][j];
        }
    }
    cout<<"Transpose matrix: "<<endl;

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<t[i][j]<<" ";

        }
        cout<<endl;
    }

}
