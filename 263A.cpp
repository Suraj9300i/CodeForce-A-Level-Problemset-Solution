#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int arr[5][5];
	int x,y;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>arr[i][j];
			if(arr[i][j]==1){
				x = i;
				y = j;
			}
		}
	}

	int m = 2-x;
	int n = 2-y;
	if(m<0)
		m = m*-1;
	if(n<0)
		n = n*-1;
	cout<<m+n;

	return 0;
}