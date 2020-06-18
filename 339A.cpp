#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s;
	cin>>s;
	vector<int> v;
	for(int i=0;i<s.length();i++){
		if(s[i]!='+')
			v.push_back(s[i]-'0');
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size()-1;i++){
		cout<<v[i]<<"+";
	}
	cout<<v[v.size()-1];
	return 0;
}