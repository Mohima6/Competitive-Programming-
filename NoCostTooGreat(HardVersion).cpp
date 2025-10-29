#include<bits/stdc++.h>
using namespace std; const int N=2e5+5;
int a[N]; vector<int> fac[N]; long long b[N],ans;
void sol(){
	map<int,bool> m;
	int n,mi=1e9,cmi=1e9,p; cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		cin>>b[i];
		if(b[i]<mi) cmi=mi,mi=b[i],p=i;
		else if(b[i]<cmi) cmi=b[i];
	}
	ans=mi+cmi;
	for(int i=1;i<=n;i++) for(int f:fac[a[i]]){
		if(m[f]){cout<<"0\n"; return;} m[f]=1;
		if(i!=p&&(f-a[p]%f)<=ans/mi) ans=min(ans,1ll*(f-a[p]%f)*mi);
	}
	for(int i=1;i<=n;i++) for(int f:fac[a[i]+1])
		if(m[f]){ans=min(ans,1ll*b[i]); break;}
	cout<<ans<<"\n";
}
int p[N],t=0; bool v[N];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	for(int i=2;i<N;i++){
		if(!v[i]) p[++t]=i;
		for(int j=1;j<=t&&p[j]*i<N;j++){
			v[p[j]*i]=1; if(i%p[j]==0) break;
		}
	}
	for(int i=1;i<=t;i++)
		for(int j=p[i];j<N;j+=p[i])
			fac[j].push_back(p[i]);
	int T; cin>>T; while(T--) sol(); return 0;
}
