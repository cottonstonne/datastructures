#include<bits/stdc++.h>
using namespace std;

int main(){
	priority_queue<int>mxheap;//maxheap
	mxheap.push(2);
	mxheap.push(5);
	mxheap.push(1);
	cout << mxheap.size() << endl;
	cout << mxheap.top() << endl;
	return 0;
}
