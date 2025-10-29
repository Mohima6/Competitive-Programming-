#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int T,n,v[100010],mn[3];
vector<int>e[100010];
bool chk(int x){
	int cs=0;for(int i=0;i<3;i++)mn[i]=0;
	for(int i=1;i<=n;i++)e[i].clear();
	for(int i=1;i<=n;i++){
		for(int k=0;k<3;k++)if(v[i]-v[mn[k]]>=x)
			e[i].push_back(mn[k]),e[mn[k]].push_back(i);
		for(int k=0,p=i;k<3;k++)if(v[mn[k]]>v[p])swap(mn[k],p);
	}
	for(int i=1;i<=n;i++)if(e[i].size()>=2)cs++;
	for(int i=1,f=0;i<=n;i++,f=0){
		if(e[i].size()>=2)f++;
		for(int p:e[i])if(e[p].size()==2)f++;
		if(f==cs)return true;
	}
	return false;
}
int main(){
	for(scanf("%d",&T);T--;){
		scanf("%d",&n),v[0]=2e9+10;int res=0;
		for(int i=1;i<=n;i++)scanf("%d",&v[i]);
		for(int l=-1e9,r=1e9,m;l<=r;){
			if(chk(m=(l+r)/2))r=m-1;else res=m,l=m+1;
		}
		printf("%d\n",res);
	}
	return 0;
}
