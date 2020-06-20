#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int arr[n][2];
	for(int i=0;i<n;i++)
		cin>>arr[i][0]>>arr[i][1];

	int res = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j && arr[i][0]==arr[j][1])
				res += 1;
		}
	}
	cout<<res;
	return 0;
}