//The_Shellkore_Awakens
#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long  ll;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{int w,x,y,z;
cin>>w>>x>>y>>z;
a[i]=w+x+y+z;
}
int thomas=a[0];
sort(a,a+n,greater<int>());
for(int i=0;i<n;i++)
{
if(a[i]==thomas)
{cout<<i+1;
return 0;}
}
return 0;
}
//1_5_3_7_6_9_1_1_P
