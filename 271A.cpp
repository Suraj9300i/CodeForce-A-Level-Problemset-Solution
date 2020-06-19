#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	n = n+1;
	while(true){
		set<int> s;
		int temp = n;
		int k=0;
		while(temp>0){
			s.insert(temp%10);
			temp /= 10;
			k++;
		}
		if(s.size()==k){
			cout<<n;
			break;
		}
		n++;
	}

	return 0;
}