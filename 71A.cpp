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
		string s;
		cin>>s;
		int n = s.length();
		if(n<=10)
			cout<<s<<"\n";
		else{
			string temp = "";
			temp += s[0];
			temp += to_string(n-2);
			temp += s[n-1];
			cout<<temp<<"\n";
		}
	}

	return 0;
}