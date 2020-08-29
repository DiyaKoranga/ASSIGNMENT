#include<iostream>
using namespace std;
int main()
{
    int i,j,n,t,Arr[30];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter elements\n";

    for(i=0;i<n;i++)
    {
        cin>>Arr[i];
    }

for(i=1;i<=n-1;i++)
{
    t=Arr[i];
    j=i-1;

        while((t<Arr[j])&&(j>=0))
        {
            Arr[j+1]=Arr[j];
            j=j-1;
        }

        Arr[j+1]=t;
    }

cout<<"The list after insertion sort is\n";
for(i=0;i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }

    return 0;
}
