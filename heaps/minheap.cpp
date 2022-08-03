#include<bits/stdc++.h>
using namespace std;

int main(){
	priority_queue<int,vector<int>,greater<int>>mnheap;
	mnheap.push(4);
	mnheap.push(1);
	mnheap.push(2);
	cout << mnheap.top() << endl;
	mnheap.pop(); 
	cout << mnheap.top() << endl;
	return 0;
}
