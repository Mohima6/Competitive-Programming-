#include<bits/stdc++.h>
using namespace std;
int t,n,a[400005];
long long f[200005];
long long solve(int l){
  for(int i=1;i<=n;i++){
    f[i]=0x3f3f3f3f3f3f3f3f;
    if(i>=2)f[i]=min(f[i],f[i-2]+abs(a[l+i-1]-a[l+i-2]));
    if(i>=3)f[i]=min(f[i],f[i-3]+max(a[l+i-1],max(a[l+i-2],a[l+i-3]))-min(a[l+i-1],min(a[l+i-2],a[l+i-3])));
  }
  return f[n];
}
int main(){
  cin>>t;
  while(t--){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],a[n+i]=a[i];
    cout<<min(solve(1),min(solve(2),solve(3)))<<'\n';
  }
  return 0;
}
