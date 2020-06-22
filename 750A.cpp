#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,k;
	cin>>n>>k;
	int rem = 240-k;
	int res = 0;
	int time = 5;
	while(n>0 && rem>=time){
		res += 1;
		n -= 1;
		rem -= time;
		time += 5;
	}
	cout<<res;

	return 0;
}