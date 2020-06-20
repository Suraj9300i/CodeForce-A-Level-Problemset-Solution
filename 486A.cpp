#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	long long int n;
	cin>>n;
	long long int even,odd;
	if(n&1){
		even = n/2;
		odd = even+1;
	}else{
		even = n/2;
		odd = even;
	}
	long long int res = (-1*(odd*odd))+(even*(even+1));
	cout<<res;

	return 0;
}