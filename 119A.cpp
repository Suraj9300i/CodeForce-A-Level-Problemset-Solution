#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
	if(b==0)
		return a;
	return GCD(b,a%b);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a,b,n;
	cin>>a>>b>>n;
	int cur = 0;
	while(n!=0){
		if(cur==0){
			n -= GCD(a,n);
			cur = 1;
		}else{
			n -= GCD(b,n);
			cur = 0;
		}
	}
	if(cur==0)
		cout<<1;
	else
		cout<<0;

	return 0;
}