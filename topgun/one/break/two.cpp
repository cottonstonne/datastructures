#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "enter input:";
	cin >> n;
	for(int i=1;i<n;i++){
		cout << string(n-i,' ');
		for(int j=n;j>=(n-i+1);j--){
			cout << j;
		}
		for(int j=n-i+2;j<=n;j++){
			cout << j;
		}
		cout << endl;
	}
	for(int i=1;i<=n;i++){
		cout << string(i-1,' ');
		for(int j=n;j>=i;j--){
			cout << j;
		}
		for(int j=i+1;j<=n;j++){
			cout << j;
		}
		cout << endl;
	}
	return 0;
}
