#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int,int>store;
	store[2]=11;
	store[1]=19;
	store[3]=10;
	for(auto i:store){
		cout << i.first << " : " << i.second << endl;
	}
	cout << store.begin()->first << endl; //smallest key
	cout << store.end()->first << endl; //largest key
	cout << store.begin()->second << endl;
	cout << store.size() << endl;
	store.erase(1);
	cout << store.size() << endl;
	return 0;
}
