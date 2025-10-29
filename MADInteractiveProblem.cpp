#include<bits/stdc++.h>
using namespace std;
int t,n,a[1000001],b[1000001],cnt,k,num,c[1000001];
void ask(){cout<<"? "<<cnt<<" ";
	for(int i=1;i<=cnt;i++)cout<<b[i]<<" ";cout<<endl;
}
main(){
	cin>>t;while(t--){
		cin>>n;cnt=1;b[1]=1;num=0;for(int i=1;i<=2*n;i++)a[i]=0;
		for(int i=2;i<=2*n;i++){
			b[++cnt]=i;ask();cin>>k;
			if(k)a[i]=k,c[++num]=i,--cnt;
		}for(int i=1;i<=n;i++)b[i]=c[i];cnt=n;
		for(int i=1;i<=2*n;i++){
			if(!a[i]){
				b[++cnt]=i;ask();cin>>k;a[i]=k;cnt--;
			}
		}
		cout<<"! ";for(int i=1;i<=2*n;i++)cout<<a[i]<<" ";cout<<endl;
	}
	return 0;
}
