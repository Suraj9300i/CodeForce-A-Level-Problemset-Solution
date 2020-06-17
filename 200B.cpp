#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int arr[n];
	double res = 0.0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		res = res+arr[i];
	}
	res = res/n;
	printf("%lf", res);


	return 0;
}