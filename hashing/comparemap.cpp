#include<bits/stdc++.h>
using namespace std;

int main(){
	//comparing maps work !!!
	unordered_map<int,int>store;
	unordered_map<int,int>check;
	store[1]++;
	store[1]++;
	store[2]++;
	check[1]++;
	check[1]++;
	check[2]++;
	if(store==check){
		cout << "yes!" << endl;
	}
	else{
		cout << "no?" << endl;
	}
	return 0;
}
