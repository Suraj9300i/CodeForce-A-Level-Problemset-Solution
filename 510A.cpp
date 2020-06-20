#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin>>n>>m;
	bool isLast = true;
	for(int i=1;i<=n;i++){
		bool isOne = true;
		for(int j=1;j<=m;j++){
			if(i&1){
				cout<<'#';
			}else{
				if(j==m && isLast && isOne){
					cout<<'#';
					isLast = false;
					isOne = false;
				}
				else if(j==1 && !isLast && isOne){
					cout<<'#';
					isLast = true;
					isOne = false;
				}
				else
					cout<<'.';
			}
		}
		cout<<"\n";
	}

	return 0;
}