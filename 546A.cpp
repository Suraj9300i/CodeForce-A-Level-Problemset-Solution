#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int k,n,w;
	cin>>k>>n>>w;

	int total = (k*w*(w+1))/2;
	if(n>=total)
		cout<<'0';
	else
		cout<<total-n;

	return 0;
}