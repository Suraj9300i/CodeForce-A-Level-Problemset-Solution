#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t-->0){
		int n;
		cin>>n;
		n = n/2;
		if(n&1){
			cout<<"NO"<<"\n";
			continue;
		}
		cout<<"YES"<<"\n";
		for(int i=1;i<=n;i++){
			cout<<2*i<<" ";
		}
		for(int i=1;i<n;i++){
			cout<<(2*i)-1<<" ";
		}
		cout<<(3*n)-1<<"\n";
	}

	return 0;
}