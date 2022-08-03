#include<bits/stdc++.h>
using namespace std;

int main(){
	unordered_set<int>check={1,2,3};
	//searching,insertion and deletion in O(1)
	check.insert(4);
	cout << check.count(1) << endl;
	for(int i:check){
		cout << i;
	}
	cout << endl;
	check.erase(3);
	for(int i:check){
		cout << i;
	}
	cout << endl;
	return 0;
}
