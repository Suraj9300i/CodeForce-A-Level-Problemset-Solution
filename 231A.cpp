#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int arr[n][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++)
			cin>>arr[i][j];
	}

	int res = 0;
	for(int i=0;i<n;i++){
		int temp = arr[i][0]+arr[i][1]+arr[i][2];
		if(temp>=2)
			res++;
	}
	cout<<res;

	return 0;
}