#include <bits/stdc++.h>
using namespace std;
int t,n,q,a;
string s;
int main(){
	cin>>t;
while (t--){cin>>n>>q;cin>>s;bool f=1;
for (char c:s) if (c=='B') f=0;
while (q--){cin>>a;if (f) cout<<a<<endl;
else{int ans=0;while (a>0)
for(char c:s){if (c=='A')a--;else a/=2;++ans;if (!a)break;}
cout<<ans<<endl;
}}}
}
