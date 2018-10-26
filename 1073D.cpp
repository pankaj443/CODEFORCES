#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,T;
	long long a[200010],dc=0,ans=0;
	cin>>n>>T;
	for(int i=0; i<(int)n; i++) cin>>a[i];
	while(T>0){
		long long Tp=T,cn=0;
		for(int i=0; i<n; i++){
			if(Tp>=a[i]){
				Tp-=a[i];
				cn++;
			}
		}
		if(cn==0) break;
		Tp=T-Tp;
		long long mv=T/Tp;
		ans+=mv*cn;
		T-=mv*Tp;
	}
	cout<<ans;
}
