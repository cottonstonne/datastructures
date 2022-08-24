#include<bits/stdc++.h>
using namespace std;

int main(){
	set<int>store;
	store.insert(5);
	store.insert(2);
	store.insert(0);
	store.insert(1);
	store.insert(8);
	auto i=store.begin(); //eureka
	cout << *i << endl; 
	int x=*store.begin(); //??
	int y=*store.rbegin();// for largest element
	cout << x << endl;
	for(int a:store){
		cout << a <<" ";
	}
	cout << endl;
	store.erase(2);
	for(int a:store){
		cout << a <<" ";
	}
	cout << endl;
	cout << *store.rbegin() << endl;
	return 0;
}
