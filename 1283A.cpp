#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t-->0){
		int h,m;
		cin>>h>>m;
		int remH = 23-h;
		int remM = 60-m;
		int res = remH*60+remM;
		cout<<res<<"\n";
	}

	return 0;
}