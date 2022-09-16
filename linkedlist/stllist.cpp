#include<bits/stdc++.h>
using namespace std;

int main(){
	list<int>l;
	//has most of vector methods
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_front(4);
	for(int i:l){
		cout << i << " ";
	}
	cout << endl;
	cout << l.size() << endl;
	//cout << l.max_size() << endl; //returns no of elements this list have
	l.reverse();
	for(int i:l){
		cout << i << " ";
	}
	cout << endl;
	l.sort();
	for(int i:l){
		cout << i << " ";
	}
	cout << endl;
	auto it=next(l.begin(),2); //incrementing pointer
	// begin()+1 works in <vector> as they are random access iterators
	// these are bi-directional operators
	l.insert(it,2,0);
	l.insert(prev(l.end(),1),2,9); //from end
	for(int i:l){
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
