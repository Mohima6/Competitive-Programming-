#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
 
vector<int>ans,add,mp[200005];
int d[200005],now,n,u,v;
 
void dfs(int x,int fa){
	d[x]=d[fa]^1;
	for(int i=0;i<mp[x].size();i++) if(fa!=mp[x][i]) dfs(mp[x][i],x);
	add.pb(x);
}
 
void solve(){
	cin>>n,ans.clear(),add.clear();
	for(int i=1;i<=n;i++) mp[i].clear(),d[i]=0;
	for(int i=1;i<n;i++) cin>>u>>v,mp[u].pb(v),mp[v].pb(u);
	dfs(n,n),now=d[1];
	for(auto i:add){
		if(i!=n) d[i]==now?now^=1:(ans.pb(0),0),ans.pb(0),ans.pb(i);
	}
	cout<<ans.size()<<endl;
	for(auto i:ans) i?(cout<<"2 "<<i<<endl):cout<<1<<endl;
}
 
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int T=1;//*
	cin>>T;//*/
	while(T--) solve();
	return 0;
}
