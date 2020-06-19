#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;

	while(t-->0){
		for(int k=0;k<n-1;k++){
			if(s[k]=='B'&& s[k+1]=='G'){
				swap(s[k],s[k+1]);
				k++;
			}
		}
	}
	cout<<s;
	return 0;
}