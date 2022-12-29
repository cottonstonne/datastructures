#include<bits/stdc++.h>
using namespace std;

int main(){
	multiset<int>store;
	store.insert(2);
	store.insert(2);
	store.insert(7);
	for(int i:store){
		cout << i << " ";
	}
	cout << endl;
	store.erase(store.find(2));// delete single instance
	for(int i:store){
		cout << i << " ";
	}
	cout << endl;
	store.erase(store.find(2));// delete single instance
	for(int i:store){
		cout << i << " ";
	}
	cout << endl;
	cout << *store.begin() << ":" << *store.rbegin() << endl;
	return 0;
}
