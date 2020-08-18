#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,arr[n],i;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=d;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<d;i++)
    {
        cout<<arr[i]<<" ";

    }
    return 0;
}
