#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "enter input";
	cin >> n;
	int p=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout << p++ << " ";
		}
		cout << endl;
	}
	return 0;
}
