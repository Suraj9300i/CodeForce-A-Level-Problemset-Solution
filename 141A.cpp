#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	int k = a.length();
	int l = b.length();
	int m = c.length();
	if(k+l!=m)
		cout<<"NO";
	else{
		int arr[26] = {0};
		for(int i=0;i<m;i++){
			arr[c[i]-'A']++;
		}

		for(int i=0;i<k;i++){
			arr[a[i]-'A']--;
		}

		for (int i = 0; i < l; ++i)
		{
			arr[b[i]-'A']--;
		}

		for(int i=0;i<26;i++){
			if(arr[i]!=0){
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
	}

	return 0;
}