#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define endl "\n"
using namespace std;
using namespace __gnu_pbds;
using ordered_set=tree<long long,null_type,less_equal<long long>,rb_tree_tag,tree_order_statistics_node_update>;
void Mo_Shams()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}
long long lcm(long long x,long long y){
    return x*y/gcd(x,y);
}
 
long long gcd(long long x,long long y){
    return __gcd(x,y);
}
 
long long fastPowerMod(long long x,long long n,long long m = 1e18){
    long long sol=1;
    while(n){
        if(n%2)sol=((sol%m)*(x%m))%m;
        x=((x%m)*(x%m))%m;
        n/=2;
    }
    return sol;
}
 
// false => swap
bool com(pair<long long,long long>a,pair<long long,long long>b){
    if(a.first==b.first) return a.second<b.second;
    return a.first>b.first;
}
int main() {
    Mo_Shams();
    long long t,n,x,y,z,k,sol,l,r,c;
    char ch;
    string s,ss;
    cin>>t;
    while(t--){
        cin>>n,sol=x=1;
        vector<long long>v(n),vv(n);
        for(auto &i:v)cin>>i;
        vv[0]=1;
        for(int i=1;i<n;i++){
            x=i-(v[i]-v[i-1]);
            if(x<0)vv[i]=++sol;
            else vv[i]=vv[x];
        }
        for(auto &i:vv)cout<<i<<" ";
        cout<<endl;
    }
}
