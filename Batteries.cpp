#include <iostream>
using namespace std;
 
int main() {
int t, n, x;
cin >> t;
while(t--){
cin>>n;
for(int d=1; d<n; d++){
for(int i=1; i<=n; i++){
cout<<i<<" "<<((i+d)%n?(i+d)%n:n)<<"\n";
cin>>x;
if(x){cout.flush(); break;}
}
if(x){break;}
}
}
}
