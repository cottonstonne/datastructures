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
	return 0;
}
