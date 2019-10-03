#include <bits/stdc++.h>
#include<string.h>
using namespace std;
const int N=1000001;
vector<int>v[N];
int k;
long int visit[N],o[N],p[N],cnt[N];
void dfs(int s){
    visit[s]=1;
    p[s]=k;
    o[k]=s;
    k++;
    for(int i=0;i<v[s].size();i++){
        if(!visit[v[s][i]])
        {
            dfs(v[s][i]);

        }
         cnt[s]+= cnt[v[s][i]];
    }

}
int main()
{
   int n,m,a,b;
    cin>>n>>m;
    cnt[1]=1;
    for(int i=2;i<=n;i++){
        int x;
        cin>>x;
        cnt[i]=1;
        v[x].push_back(i);

    }
dfs(1);

    while(m--)
    {
        cin>>a>>b;
       if(cnt[a]<b)cout<<"-1"<<endl;
       else cout<<o[p[a]+b-1]<<endl;


    }


    return 0;
}
