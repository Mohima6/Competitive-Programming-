#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		int pre=-k,res=0;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				if(i-pre>=k) res++;
				pre=i;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
