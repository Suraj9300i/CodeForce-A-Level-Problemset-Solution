#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	string str;
	cin>>str;

	if(n<26){
		cout<<"NO";
	}else{
		set<char> s;
		for(int i=0;i<n;i++){
			char temp = tolower(str[i]);
			s.insert(temp);
		}
		if(s.size()==26)
			cout<<"YES";
		else
			cout<<"NO";
	}

	return 0;
}