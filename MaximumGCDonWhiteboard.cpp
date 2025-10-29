#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int T,n,m,cs[800010],v[800010];
int main(){
	for(scanf("%d",&T);T--;){
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n*3;i++)cs[i]=v[i]=0;
		for(int i=1,a;i<=n;i++)scanf("%d",&a),cs[a]++,v[a/4]++;
		for(int i=n-1;i;i--)v[i]+=v[i+1];
		for(int i=n;i;i--){
			if(cs[i]+cs[i*2]+cs[i*3]+v[i]+m>=n){
				printf("%d\n",i);break;
			}
		}
	}
	return 0;
}
