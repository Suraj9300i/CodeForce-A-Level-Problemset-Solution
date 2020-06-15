#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s;
	cin>>s;

	int n = s.length();
	int low = 0;
	int cap = 0;
	for(int i=0;i<n;i++){
		if(s[i]>=97 && s[i]<=122)
			low++;
		else if(s[i]>=65 && s[i]<=90)
			cap++;
	}
	if(cap>low)
		transform(s.begin(),s.end(),s.begin(),::toupper);
	else
		transform(s.begin(),s.end(),s.begin(),::tolower);
	cout<<s;

	return 0;
}