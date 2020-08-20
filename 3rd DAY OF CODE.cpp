#include<bits/stdc++.h>
using namespace std;
int main() {

int n1,n2,n3,i;

cin>>n1>>n2>>n3;
int p=0,q=0,r=0;
int a[n1],b[n2],c[n3];
long long sum=0,sum1=0,sum2=0;
for(i=0;i<n1;i++)
    {
     cin>>a[i];
    sum=sum+a[i];
    }

for(i=0;i<n2;i++)
   {
   cin>>b[i];
    sum1=sum1+b[i];
    }
for(i=0;i<n3;i++)
    {
     cin>>c[i];
    sum2=sum2+c[i];
    }

     while(sum!=sum1 ||sum1!=sum2 ||sum!=sum2)
    {
    if(sum>sum1 && sum>sum2|| sum==sum1 && sum>sum2 || sum==sum2 &&sum>sum1)
    { 
        sum=sum-a[p++];
    }
         
             if(sum1>sum && sum1>sum2|| sum1==sum && sum1>sum2 || sum1==sum2 &&sum1>sum)
             {
                 sum1=sum1-b[q++];
         }
          if(sum2>sum &&sum2>sum1 || sum2==sum1 && sum2>sum || sum2==sum &&sum2>sum1)
          {
              sum2=sum2-c[r++]; 
          }
     }
cout<<sum;
   return 0;
}
