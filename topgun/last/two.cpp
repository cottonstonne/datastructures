#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "number of values:";
	cin >> n;
	int k;
	cout << "k value:";
	cin >> k;
	priority_queue<int,vector<int>,greater<int>>store;
	for(int i=0;i<n;i++){
		int t;
		cin >> t;
		store.push(t);
	}
	while(k>1){
		store.pop();
		k--;
	}
	cout << store.top() << endl;
}
