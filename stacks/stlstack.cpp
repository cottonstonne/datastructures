#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int>stackbag;
	stackbag.push(2);
	stackbag.push(3);
	stackbag.push(7);
	stackbag.push(2);
	while(!stackbag.empty()){
		cout << stackbag.top() << " ";
		stackbag.pop();
	}
	cout << endl;
	return 0;
}
