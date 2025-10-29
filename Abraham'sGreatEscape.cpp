#include <iostream>
using namespace std;
int main(){
int n,k;
int t;
cin>>t;
while(t--){
cin>>n>>k;
if(k==n*n-1)
    cout<<"NO"<<endl;
else{
cout<<"YES"<<endl;
int temp=n,x;
while(n--){
x=temp;
while(x--){
if(k!=0){
cout<<"U";
k--;
}
else{
if(x==0 && n!=0)
    cout<<"D";
else if(x==0 && n==0)
cout<<"L";
else{
cout<<"RL";
x--;
}
}
}
cout<<endl;
}
}
}
 
return 0;
}
