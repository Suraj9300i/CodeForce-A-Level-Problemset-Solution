#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m,k;
	cin>>n>>m>>k;
	if(n<=m && n<=k)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}