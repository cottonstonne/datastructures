#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "enter input:";
	cin >> n;
	for(int i=1;i<=n;i++){
		cout << string(n-i,' ');
		for(int j=1;j<=i;j++){
			cout << j;
		}
		for(int j=i-1;j>=1;j--){
			cout << j;
		}
		cout << endl;
	}
	for(int i=1;i<=n;i++){
		cout << string(i,' ');
		for(int j=1;j<=n-i;j++){
			cout << j;
		}
		for(int j=n-1-i;j>=1;j--){
			cout << j;
		}
		cout << endl;
	}
	return 0;
}
