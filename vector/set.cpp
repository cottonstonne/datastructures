#include<bits/stdc++.h>
using namespace std;

int main(){
	set<int>store;
	store.insert(4);
	store.insert(5);
	store.insert(2);
	store.insert(8);
	for(int i:store){
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
