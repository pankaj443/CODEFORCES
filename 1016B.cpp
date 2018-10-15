//The_Shellkore_Awakens
#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long  ll;
int main()
{
int n,m,q;
cin>>n>>m>>q;
string s,t;
cin>>s>>t;
int h[n]={0};
for(int i=0;i<=n-m;i++)
{int c=0;
for(int j=0;j<m;j++)
{
    if(s[i+j]==t[j])
    c++;
}
if(c==m)
{
    h[i]=1;
    h[i+m-1]=2;
}
}
while(q--)
{bool f=0;
    int l,r,ans=0;
    cin>>l>>r;
    for(int i=l-1;i<r;i++)
    {
     if(h[i]==1)
     f=1;
     if(h[i]==2&&f==1)
     {
         f=0;ans++;
     }
    }
    cout<<ans<<endl;
}
return 0;
}
//1_5_3_7_6_9_1_1_P
