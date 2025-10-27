#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
#define nl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define ppb pop_back
#define forl for(ll i=0;i<n;i++)
#define forlk for(ll i=0;i<k;i++)
#define vn vector<ll>v(n)
#define vin forl cin>>v[i];
#define v2n vector<ll>v2(n);
#define v2in forl cin>>v2[i]
#define sort1 sort(v.begin(),v.end());
#define sort2 sort(v2.begin(),v2.end());
#define mapp2 map<ll,ll,greater<ll>> m2;
#define v2d vector<vector<char>> v(row, vector<char>(col));
#define mapp map<ll,ll>m
#define lower for(char &c:str) c=tolower(c);
#define upper for(char &c:str) c=toupper(c);
#define rev1 reverse(v.begin(),v.end());
#define rev2 reverse(v2.begin(),v2.end());
#define count0 count(str.begin(),str.end(),'0');
#define count1 count(v.begin(),v.end(),-1);
#define uniq unique(str.begin(),str.end())-str.begin();
#define maxi *max_element(v.begin(),v.end())
#define mini *min_element(v.begin(),v.end())
#define uppind upper_bound(v.begin(),v.end(),x)-v.begin();
#define lowind lower_bound(v.begin(),v.end(),x)-v.begin();
#define vecp vector<pair<long long,int>>vp(n+1);
#define f first
#define s second
#define MP make_pair
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))
#define rforl for(ll i=n-1;i>=0;i--)
 
ll powr(ll a,ll b) {
if(b==0) return 1;
ll hf=powr(a,b/2);
if(b&1) return hf*hf*a;
else return hf*hf;
}
 
ll gcd_(ll a,ll b) {
if (b==0) return a;
return gcd_(b,a%b);
}
 
ll par(ll a,ll b,ll c) {
    if(abs(a-b)>c) return 0;
    return c-(c-abs(a-b))%2;
}
 
int main() {
optimize();
ll t;cin>>t;while(t--) {
ll n;cin>>n;
vn;vin;;
set<ll>s;
forl s.insert(v[i]);
cout << s.size() << nl;
}
}
