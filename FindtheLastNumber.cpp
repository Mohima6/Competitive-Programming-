//C++23 (GCC 14-64, msys2)

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int T,n,a[20005];
signed main() {
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=1;i<=n;i++)
			a[i]=0;
		int ans=0,nd=0;
		for(int s=0;s<16;s++){
			int tc=0,gc=0;
			for(int i=1;i<=n;i++){
				int aa=0;
				for(int ss=0;ss<s;ss++)
					if(i&(1<<ss)) aa|=(1<<ss);
				if(aa==ans){
					tc+=((i&(1<<s))!=0);
				}
			}
			for(int x,i=1;i<n;i++){
				if(a[i]==ans){
					cout<<"? "<<i<<" "<<(1<<s)<<endl;
					cin>>x;
					if(x)
						gc++,a[i]|=(1<<s);
				}
			}
			if(gc!=tc) ans|=(1<<s);
		}
		cout<<"! "<<ans<<endl;
	}
	return 0; 
}
