#include<bits/stdc++.h>
using namespace std;

int main(){
	multiset<int>store;
	store.insert(2);
	store.insert(2);
	store.insert(7);
	cout << *store.begin() << endl;
	cout << *store.rbegin() << endl;
	store.erase(store.find(2));// delete single instance
	cout << *store.begin() << endl;
	cout << *store.rbegin() << endl;
	return 0;
}
