#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,t,x,y,num,k,p[10000001],pr[10000001],cnt,a[1000001],id;char s[1000001];
map<int,int>mp;int calc(int pm,int x,int y){
	int cnt1=0,cnt2=0,q=1,pp=pm,tot=1e9;
	while(pp<=x)cnt1+=x/pp,cnt2+=y/pp,pp*=pm;
	pp=pm;while(pp*pm<=m)pp*=pm,q++;
	for(int i=1;i<=q;i++)if(cnt1/i!=cnt2/i)tot=min(tot,cnt2/i);return tot;
}main(){
	for(int i=2;i<=10000000;i++){if(!p[i]){pr[++cnt]=i;for(int j=i*2;j<=10000000;j+=i)p[j]=1;}}
	cin>>t;while(t--){
		cin>>n>>m;int ans=0;id=0;mp.clear();
		for(int i=n-1;i;i--){
			k=i+1;num=1;while(pr[num]<=3200){
				if(k%pr[num]==0&&!mp[pr[num]])a[++id]=pr[num],mp[pr[num]]=1;
				while(k%pr[num]==0)k/=pr[num];num++;
			}if(k>1)a[++id]=k;int w=1e9;
			for(int j=1;j<=id;j++)w=min(w,calc(a[j],n,i));ans+=w;
			if(!p[i])break;
		}cout<<ans<<"\n";
	}
	return 0;
}
