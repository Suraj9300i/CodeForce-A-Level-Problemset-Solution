#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int mx = max(a,max(b,max(c,d)));
	if(a!=mx)
		cout<<mx-a<<" ";
	if(b!=mx)
		cout<<mx-b<<" ";
	if(c!=mx)
		cout<<mx-c<<" ";
	if(d!=mx)
		cout<<mx-d<<" ";


	return 0;
}