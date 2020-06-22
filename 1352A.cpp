#include<bits/stdc++.h>
using namespace std;

void printZeroes(int n){
	for(int i=0;i<n;i++)
		cout<<'0';
	cout<<" ";
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t-->0){
		string str;
		cin>>str;
		int n = str.length();
		if(n==1){
			cout<<'1'<<"\n"<<str<<"\n";
			continue;
		}
		int d = 0;
		for(int i=0;i<n;i++){
			if(str[i]!='0')
				d++;
		}
		cout<<d<<"\n";
		cout<<str[0];
		printZeroes(n-1);
		for(int i=1;i<n;i++){
			int k = str[i]-'0';
			if(k==0)
				continue;
			cout<<k;
			printZeroes(n-i-1);
		}
		cout<<"\n";
	}

	return 0;
}