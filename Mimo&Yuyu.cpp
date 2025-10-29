#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		int ans=0;
		cin>>n>>m>>k;
		map<int,int>mp;
		while(k--)
		{
			int l,r;
			cin>>l>>r;
			if(r==1)continue;
			if(n==1&&r!=2) continue;
			mp[r]++;
			if(mp[r]%2) ans++;
			else ans--;
		}
		if(ans) cout<<"Mimo"<<'\n';
		else cout<<"Yuyu"<<'\n';
	}
}
