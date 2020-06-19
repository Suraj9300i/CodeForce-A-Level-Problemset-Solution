#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int c = 0;
	while(n-->0){
		int a,b;
		cin>>a>>b;
		if(b-a>=2)
			c++;
	}
	cout<<c;
	return 0;
}