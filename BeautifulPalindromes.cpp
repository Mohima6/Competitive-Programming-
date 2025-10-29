#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void code(){
    int n,k; cin>>n>>k;
    vector<int> index(n+1,-1);
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        index[x]=i;
    }
    vector<pair<int,int>> a;
    for(int i=1;i<=n;i++) a.emplace_back(index[i],i);
        sort(a.begin(),a.end());
    for(int i=0;i<k;i++) cout<<a[i].second<<' ';
}
  
int main(){
    int t; cin>>t;
    while(t--){
        code();
        cout<<'\n';
    }
   return 0;
}
