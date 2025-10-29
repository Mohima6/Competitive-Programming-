#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll _=5e5+5;
ll N,n,x,k,s,i;set<ll>a;
void P(){
	cin>>n;s=k=0;a.clear();
	for(i=0;i<n;i++){
		cin>>x;
		if(a.count(x))a.erase(x),k+=x;
		else a.insert(x);
	}
	k<<=1;s=(n-a.size()>2?k:0);x=-1e18;
	for(ll y:a){
		if(k+x>y)s=max(s,k+x+y);
		if(k>y)s=max(s,k+y);
		x=y;
	}
	cout<<s<<'\n';
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>N;while(N--)P();
}
