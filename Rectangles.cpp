#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n, m; cin>>n>>m;
	vector<string> s(n);
	for (int i=0; i<n; i++) cin>>s[i];
	bool rotate=false;
	if (n>m) {
		rotate=true;
		swap(n, m);
	}
	vector< vector<int> > f(n, vector<int>(m, 1e9)), a(n, vector<int>(m));
	
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++) a[i][j]= rotate? s[j][i]=='1': s[i][j]=='1';
	
	for (int u=0; u<n; u++) {	
		for (int d=u+1; d<n; d++) {
			int lst=-1;
			for (int l=0; l<m; l++) {
				if (a[u][l] && a[d][l]) {
					if (lst!=-1) {
						for (int i=lst; i<=l; i++) 
							f[d][i]=min(f[d][i], (d-u+1)*(l-lst+1));
					}
					lst=l;
				}
			}
		}
		
		for (int d=n-2; d>=u; d--)
			for (int i=0; i<m; i++)
				f[d][i]=min(f[d][i], f[d+1][i]); 
	}
	
	if (rotate) swap(n, m);
		for (int i=0; i<n; i++) 
			for (int j=0; j<m; j++) cout<<(rotate?f[j][i]:f[i][j])%(int(1e9))<<" \n"[j+1==m];
}
int main() {	
	int nc; cin>>nc; while (nc--) solve(); 
	return 0;
}
