#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s;
	cin>>s;
	set<char> st;
	for(int i=0;i<s.length();i++)
		st.insert(s[i]);
	if(st.size()%2==1)
		cout<<"IGNORE HIM!";
	else
		cout<<"CHAT WITH HER!";

	return 0;
}