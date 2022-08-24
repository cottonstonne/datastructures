#include<bits/stdc++.h>
using namespace std;

int main(){
	priority_queue<int>store;
	store.push(1);
	cout << store.top() << endl;
	store.pop();
	cout << "size:" << store.size() << endl;
	cout << store.top() << endl;
	return 0;
}
