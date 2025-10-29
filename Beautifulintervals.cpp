#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>&a,int n){
	vector<int> u(n);int p=0;
	for(int i=1;i<=n;i++)if(a[i]!=-1)u[a[i]]=1;
	for(int i=1;i<=n;i++)if(a[i]==-1){
		while(u[p])p++;
		a[i]=p;u[p]=1;
	}
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		vector<int> s(n+2),e(n+2),d(n+3);
		for(int i=0;i<m;i++){
			int l,r;cin>>l>>r;
			s[l]=1;e[r]=1;d[l]++;d[r+1]--;
		}
		vector<int> f(n+2);int c=0;
		for(int i=1;i<=n;i++)c+=d[i],f[i]=c;
		vector<int> a(n+2,-1);bool ok=0;
		for(int i=1;i<=n;i++)if(f[i]==m){
			a[i]=0;solve(a,n);ok=1;break;
		}
		if(ok)continue;
		for(int i=1;i<n;i++){
			if(!e[i]){
				a[i]=0;a[i+1]=1;solve(a,n);ok=1;break;
			}
			if(!s[i+1]){
				a[i]=1;a[i+1]=0;solve(a,n);ok=1;break;
			}
		}
		if(ok)continue;
		a[1]=0;a[2]=2;a[3]=1;solve(a,n);
	}
}
