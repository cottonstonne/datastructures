#include<bits/stdc++.h>
using namespace std;

int main(){
	list<int>store;
	store.push_back(4);
	store.push_back(1);
	cout << store[1] << endl;
	for(int i:store){
		cout << i << " ";
	}
	cout << endl;
	store.sort();
	for(int i:store){
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
