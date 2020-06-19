#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int limak,bob;
	cin>>limak>>bob;

	int res = 0;
	while(limak<=bob){
		res++;
		limak *= 3;
		bob *= 2;
	}
	cout<<res;

	return 0;
}