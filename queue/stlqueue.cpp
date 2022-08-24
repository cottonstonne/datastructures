#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int>store;
	store.push(2);
	store.push(1);
	store.push(5);
	cout << store.front() << endl;
	cout << store.back() << endl;
	while(!store.empty()){
		cout << store.front() << " ";
		store.pop();
	}
	cout << endl;
	return 0;
}
