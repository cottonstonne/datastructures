#include<bits/stdc++.h>
using namespace std;

int main(){
	list<int>l;
	//has most of vector methods
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	for(int i:l){
		cout << i << " ";
	}
	cout << endl;
	cout << l.size() << endl;
	cout << l.max_size() << endl; //returns no of elements this list have
	l.sort();
	for(int i:l){
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
