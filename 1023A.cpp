//The_Shellkore_Awakens
#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long  ll;
int main()
{
int i=0;
int n,m;
cin>>n>>m;

string s,t;
cin>>s>>t;
if(m<n-1)
{cout<<"NO"; return 0;}
while(s[i]!='*'&&i<n)
{
if(s[i]!=t[i])
{
    cout<<"NO"; return 0;
}
i++;
}
if(i==n&&i==m)
{cout<<"YES";return 0;}
if(i==n&&i!=m)
{cout<<"NO"; return 0;}

i++;
int j=m-(n-i);
for(int k=0;k<=n-i;k++)
{
if(s[i+k]!=t[j+k])
{cout<<"NO"; return 0;}
}
cout<<"YES";
return 0;
}
//1_5_3_7_6_9_1_1_P
