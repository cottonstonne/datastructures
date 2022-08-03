#include<bits/stdc++.h>
using namespace std;

int main(){
	priority_queue<int,vector<int>>mxheap;//maxheap
	mxheap.push(2);
	mxheap.push(5);
	mxheap.push(1);
	cout << mxheap.top() << endl;
	mxheap.remove(1);
	cout << mxheap.top() << endl;
	return 0;
}
