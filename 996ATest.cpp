#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int res = 0;
	if(n>=100){
		res += (n/100);
		n %= 100;
	}
	if(n>=20){
		res += (n/20);
		n %= 20;
	}
	if(n>=10){
		res += (n/10);
		n %= 10;
	}
	if(n>=5){
		res += (n/5);
		n %= 5;
	}
	if(n>=1){
		res += (n/1);
		n %= 1;
	}
	cout<<res;
	return 0;
}