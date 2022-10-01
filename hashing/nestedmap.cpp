#include<bits/stdc++.h>
using namespace std;

int main(){
	//nested map like dp[][] , to map two keys
	unordered_map<int,unordered_map<int,int>>store;
	store[1][1]=2;
	cout << store[1][1]<< endl;
	cout << "size:" << store.size() << endl;
	map<int,map<int,map<int,int>>>hole;
	hole[1][2][3]=20;
	cout << hole[1][2][3] << endl;
	cout << hole[1][2][2] << endl;
	cout << "try:" << hole.count(2) << endl;
	//cout << hole.count(([1][2][3])) << endl;
	//solving above problem
	cout << "try hard:" << hole[1][2].count(4) << endl; //hehehe
	cout << "size of hole:" << store.size() << endl;
	return 0;
}
