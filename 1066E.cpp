#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
int main(){
	int n,m,ans=0,sum=0,p=1;
	cin>> n >>m;
	string s,t;
	cin>>s>>t;
	for(int i=0;i<m;i++){
		if(s[n-i-1]=='1'&& i<n)
			sum=(sum+p)%mod;
		if(t[m-i-1]=='1')
			ans= ( ans + sum ) % mod;
		p=(p*2)%mod;
	}
	cout<<ans<<endl;
}
