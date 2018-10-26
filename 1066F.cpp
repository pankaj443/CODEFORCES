#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> PLL;
map<ll,vector<PLL> > mp;
ll dis(PLL a,PLL b){
    return abs(a.first-b.first)+abs(a.second-b.second);
}
int main(){
    ll n;
    scanf("%lld",&n);
    for(ll i=0;i<n;i++){
            ll x,y;
        scanf("%lld%lld",&x,&y);
        mp[max(x,y)].push_back(PLL(x,y));
    }
    PLL left(0,0),right(0,0);
    ll dl=0,dr=0;
    for(auto &pr: mp){
        sort(pr.second.begin(),pr.second.end(), [](PLL a,PLL b){return make_pair(a.first,-a.second) < make_pair(b.first,-b.second);} );
        PLL nl=*pr.second.begin();
        PLL nr=pr.second.back();
        ll dd=dis(nl,nr);

        ll ndl=min(dl+dis(left,nr)+dd,dr+dis(right,nr)+dd);
        ll ndr=min(dl+dis(left,nl)+dd,dr+dis(right,nl)+dd);

        dl=ndl;
        dr=ndr;
        left=nl;
        right=nr;

    }
    printf("%lld\n",min(dl,dr));
    return 0;
}
