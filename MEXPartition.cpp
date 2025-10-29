#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pii pair<int, int>
#define vi vector<int>
#define vpii vector<pii>
#define vvi vector<vector<int>>
#define vvpii vector<vector<pii>>
#define vvvi vector<vector<vector<int>>>
#define mod 1000000007
#define INT_MAX LLONG_MAX
#define pb push_back
// Loop macros
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define FORR(i, a, b) for(int i = a; i > b; --i)
#define FOREACH(x, a) for(auto& x : a)
 
// modulus
int m1(int a, int b, int m=mod) {
    int result = (a % m + b % m) % m;
    return ((result + m) % m);
}
int abs(int a, int b) {
    return a > b ? a - b : b - a;
 
}
 
int p1(int a, int b, int m=mod) {
    int result = (a % m * b % m) % m;
    return ((result + m) % m);
}

void ans(){
    int n;
    cin>>n;
    vi a(n);
    set<int>s;
    FOR(i,0,n){
        cin>>a[i];
        s.insert(a[i]);
    }
    int j = 0;
    for(auto&i:s){
        if(i!=j){
            cout<<j;
            return;
        }
        j++;
    }
    cout<<j;
    return;
}
signed main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
      ans();   
      cout<<endl;   
        
    }
}
