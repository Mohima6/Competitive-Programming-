#include<bits/stdc++.h>
using namespace std;
int qry(int tag,int l,int r){
	int x;
	cout<<tag<<' '<<l<<' '<<r<<endl;
	cin>>x;
	return x;
}
int main(){
	int T,n,i,c,l,r,mid;
	for(cin>>T;T>0;T--)
	{
		cin>>n;
		c=qry(2,1,n)-qry(1,1,n);
		l=0;
		r=n;
		while(r-l>1)
		{
			mid=(l+r)/2;
			if(qry(2,1,mid)==qry(1,1,mid))l=mid;
			else r=mid;
		}
		cout<<"! "<<r<<' '<<r+c-1<<endl;
	}
	
}
