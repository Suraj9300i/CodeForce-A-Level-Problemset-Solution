#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int p,ch;
	cin>>p>>ch;

	int d = p%10;
	int res = 0;

	for(int i=1;i<=10;i++){
		int k = d*i;
		if(k%10==0 || k%10==ch){
			cout<<i;
			return 0;
		}
	}

	return 0;
}