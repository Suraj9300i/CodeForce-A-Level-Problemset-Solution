#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s;
	cin>>s;
	int c=0;
	for(int i=0;i<s.length();i++){
		int k = s[i]-'0';
		if(k==4 || k==7){
			c++;
		}
	}
	if(c==4 || c==7)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}