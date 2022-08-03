#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "enter input:";
	cin >> n;
	for(int i=1;i<=n;i++){
		cout << string((n-i),' ');
		for(int j=1;j<=i;j++){
			cout << j;
		}
		cout << endl;
	}
	return 0;
}
