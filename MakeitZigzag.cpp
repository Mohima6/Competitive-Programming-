#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int n,a[200005],Max=-1,ans=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			Max=max(a[i],Max);
			if(i%2==0)
			a[i]=Max;
			if(i%2==1&&a[i]>=a[i-1]&&i>1)
			ans+=a[i]-a[i-1]+1;
		}
		if(a[2]==a[1])ans++;
		cout<<ans<<endl;
		t--;
	}
}
