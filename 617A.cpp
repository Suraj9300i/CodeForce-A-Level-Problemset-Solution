#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int steps;
	if(n%5==0)
		steps = n/5;
	else
		steps = (n/5)+1;
	cout<<steps;
	return 0;
}