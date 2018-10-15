//The_Shellkore_Awakens
#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long  ll;
int main()
{
ll n,m,val;
cin>>n>>m;
ll sum=0;
for(int i=0;i<n;i++)
{
cin>>val;
sum+=val;
cout<<sum/m<<' ';
sum=sum%m;
}
return 0;
}
//1_5_3_7_6_9_1_1_P
