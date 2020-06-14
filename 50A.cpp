#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int m,n;
	cin>>m>>n;
	if(m==1 && n==1)
		cout<<0;
	else{
		int res = (m*n)/2;
		cout<<res;
	}

	return 0;
}