#include<bits/stdc++.h>
using namespace std;
int main()
{
long int n;
long int i;
int x;
cin >> n;
string arr[n];
string s;
for(i = 0; i < n/2; i++)
{
cin >> x;
cin >> s;
arr[x] = arr[x] + "-" + " ";
}
for(i = n/2; i < n; i++)
{
cin >> x;
cin >> s;
arr[x] = arr[x] + s + " ";
}
for(i = 0; i < n; i++)
{
cout << arr[i];
}
return 0;
}
