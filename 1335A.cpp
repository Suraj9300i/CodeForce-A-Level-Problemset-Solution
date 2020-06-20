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
		if(n<=2)
			cout<<0<<"\n";
		else{
			if(n&1){
				cout<<(n/2)<<"\n";
			}else{
				cout<<(n/2)-1<<"\n";
			}
		}
	}

	return 0;
}