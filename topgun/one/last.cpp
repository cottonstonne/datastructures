#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "enter input:";
	cin >> n;
	for(int i=1;i<=n;i++){
		string res="";
		for(int j=i;j<=n;j++){
			res=res+to_string(j);
		}
		res=res+string(i,' ');
		string rev=res;
		reverse(rev.begin(),rev.end());
		cout << res + rev << endl;
	}
	return 0;
}
