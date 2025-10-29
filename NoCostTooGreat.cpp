#include<bits/stdc++.h>
using namespace std;
const int N=2e5;
int n,a[N+5],b[N+5];
int cnt[N+5];
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	memset(cnt,0,sizeof(cnt));
	for(int i=1;i<=n;i++)
		for(int j=1;j*j<=a[i];j++)
			if(a[i]%j==0){
				if(j>1)cnt[j]++;
				if(j*j!=a[i])cnt[a[i]/j]++;
			}
	for(int i=1;i<=N;i++)if(cnt[i]>=2)return puts("0"),void();
	for(int i=1;i<=n;i++){
		int t=a[i]+1;
		for(int j=1;j*j<=t;j++)
			if(t%j==0&&((j>1&&cnt[j])||cnt[t/j]))
				return puts("1"),void();
	}
	puts("2");
}
int main(){
	int T;
	cin>>T;
	while(T--)solve();
	return 0;
}
