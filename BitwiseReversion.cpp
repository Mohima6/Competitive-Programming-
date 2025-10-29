#include<iostream>
#include <vector>
#include <deque>
#include <queue>        
#include <stack>        
#include <set>       
#include <map>          
#include <unordered_set> 
#include <unordered_map>
#include <algorithm>   
#include <numeric>      
#include <functional>   
#include <cmath>        
#include <cstdlib>      
#include <string>
#include <cstring>     
#include <climits>     
#include <limits>       
#include <ctime>        
#include <bitset>
#include <cassert>
#include <complex>
#include <iomanip>
#include <valarray>
#include <random>
#include <memory>
#include <chrono>
#include <tuple>
#define int long long 
#define endl '\n'
 
 
using namespace std;
 
 
 
 
void solve(){
	int x,y,z;
	cin>>x>>y>>z;
	int a = x|z,b = x|y,c = y|z;
	if((a&b) == x && (b&c) == y && (c&a) == z){
		cout<<"YES"<<endl;
		return ;
	}
	cout<<"NO"<<endl;
	return ;
}
 signed main(){
#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
