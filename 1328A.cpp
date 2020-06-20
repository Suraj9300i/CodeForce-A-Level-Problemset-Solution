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
		int a,b;
		cin>>a>>b;
		int d = a/b;
		if(a%b==0)
			cout<<0<<"\n";
		else{
			d = d+1;
			int res = (b*d)-a;
			cout<<res<<"\n";
		}
	}

	return 0;
}