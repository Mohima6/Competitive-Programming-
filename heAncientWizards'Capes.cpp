#include <bits/stdc++.h>
using namespace std;
 
const int N=1e5+5;
 
int T,n,a[N];
int check(int x){
	int sum=x,pre=x;
	for(int i=1;i<n;i++){
		int cur=a[i+1]-a[i]+1-pre;
		if(cur<0||cur>1)return 0;
		sum+=cur;
		pre=cur;
	}
	if(a[1]-x==n-sum)return 1;
	return 0;
}
 
int main(){
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		cout<<check(0)+check(1)<<endl;
	}
}
