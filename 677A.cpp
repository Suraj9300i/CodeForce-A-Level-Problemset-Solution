#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,h;
	cin>>n>>h;
	int arr[n];
	int res = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>h)
			res += 2;
		else
			res++;
	}
	cout<<res;

	return 0;
}